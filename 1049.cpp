// 1049.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;

void MergeSort(double *A, int n) {
	int mid, i;
	double *L, *R;
	if (n < 2) return; // base condition. If the array has less than two element, do nothing.

	mid = n / 2;  // find the mid index.

				  // create left and right subarrays
				  // mid elements (from index 0 till mid-1) should be part of left sub-array
				  // and (n-mid) elements (from mid to n-1) will be part of right sub-array
	L = new double[mid];
	R = new double[n - mid];

	for (i = 0; i<mid; i++) L[i] = A[i]; // creating left subarray
	for (i = mid; i<n; i++) R[i - mid] = A[i]; // creating right subarray

	MergeSort(L, mid);  // sorting the left subarray
	MergeSort(R, n - mid);  // sorting the right subarray
	void Merge(double *A, double *L, int leftCount, double *R, int rightCount);
	Merge(A, L, mid, R, n - mid);  // Merging L and R into A as sorted list.
								   // the delete operations is very important
	delete[] R;
	delete[] L;
}

void Merge(double *A, double *L, int leftCount, double *R, int rightCount) {
	int i, j, k;

	// i - to mark the index of left aubarray (L)
	// j - to mark the index of right sub-raay (R)
	// k - to mark the index of merged subarray (A)
	i = 0; j = 0; k = 0;

	while (i<leftCount && j< rightCount) {
		if (L[i]  < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while (i < leftCount) A[k++] = L[i++];
	while (j < rightCount) A[k++] = R[j++];
}


int main()
{
	int n;
	cin >> n;
	double *ptrtolist;
	ptrtolist = new double[n];
	for (int i = 0; i < n; i++)cin >> ptrtolist[i];
	double sum = 0.0;
	MergeSort(ptrtolist, n);
	for (int i = 0; i < n; i++) {
		sum += ptrtolist[i] * (i+1)*(n - i);
	}
	cout << setiosflags(ios::fixed) << setprecision(2) << sum;
    return 0;
}

