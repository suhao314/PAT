// 1008.cpp: 定义控制台应用程序的入口点。
//


//vector类对象在被函数更改时更改的是一个副本，相当于值传递
#include "stdafx.h"
#include<iostream>
using namespace std;

int min_m(int n, int m) {
	return (m % n);
}

//向右移动一格
void _move(int a[], int n) {
	int temp = a[n - 1];
	for (int i = n - 1; i > 0; i--) {
		a[i] = a[i - 1];
	}
	a[0] = temp;
}

int main()
{
	int n, m;
	cin >> n >> m;
	/*void* ptr2array;
	ptr2array = new int[n];*/
	m = min_m(n, m);
	//vector<int>arr(n);
	int *arr;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < m; i++) {
		_move(arr, n);
	}
	cout << arr[0];
	for (int i = 1; i < n;i++) {
		cout << " " << arr[i];
	}
    return 0;
}

