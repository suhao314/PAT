// 1056.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *ptrtolist;
	ptrtolist = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> ptrtolist[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += 10 * ptrtolist[i];
		sum += ptrtolist[i];
	}
	cout << (n - 1) * sum;
    return 0;
}

