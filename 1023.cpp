// 1023.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

int sum(int a[], int n) {
	return n < 1 ? 0 : sum(a, n - 1) + a[n - 1];
}

void bubblesort(int array[], int n) {
	bool sorted = false;
	while (!sorted) {
		sorted = true;
		for (int i = 1; i < n; i++) {
			if (array[i] < array[i - 1]) {
				swap(array[i], array[i - 1]);
				sorted = false;
			}
		}
		n--;
	}
}


int main()
{
	int count[10];
	for (int i = 0; i < 10; i++)cin >> count[i];
	int width_of_array = sum(count, 10);				//下标+1
	int *ptrtoarr;
	ptrtoarr = new int[width_of_array];
	/*for (int i = 0; i < 10; i++) {
		for (int j = 0; j < count[i]; j++) {
			ptrtoarr[j] = i;
		}
	}
	static int j = 0;
	for (int i = 0; i < 10; i++) {
		for (; j < count[i]; j++) {
			ptrtoarr[j] = i;
		}
	}*/

	//bubblesort(ptrtoarr, width_of_array);
	static int pos = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < count[i]; j++) {
			ptrtoarr[pos] = i;
			pos++;
		}
	}
	if (ptrtoarr[0] != 0) {
		for (int i = 0; i < width_of_array; i++) {
			cout << ptrtoarr[i];
		}
	}
	else {
		int pos_of_min_not_zero = 1;
		for (int i = 0; i < width_of_array; i++) {
			if (ptrtoarr[i] != 0) {
			pos_of_min_not_zero = i;
			break;
			}
			
	}
		swap(ptrtoarr[0], ptrtoarr[pos_of_min_not_zero]);
		for (int i = 0; i < width_of_array; i++) {
			cout << ptrtoarr[i];
		}
	}
	
    return 0;
}

