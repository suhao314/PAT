// 1012.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;

void process(int a[], int count1, int p[], int n) {
	if (a[0] == 0)cout << "N ";
	else cout << a[0] << " ";
	if (a[1] == 0)cout << "N ";
	else{
		int sum = 0;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0)sum += p[i];
			else sum -= p[i];
	}
		cout << sum << " ";
	}
	if (a[2] == 0)cout << "N ";
	else cout << a[2] << " ";
	if (a[3] == 0)cout << "N ";
	else { 
		double average;
		//错误写法：两int相除
		/*average = a[3] / count1;*/
		average = static_cast<double>(a[3]) / static_cast<double>(count1);
		cout << setiosflags(ios::fixed) << setprecision(1) << average << " ";
	}
	if (a[4] == 0)cout << "N";
	else cout << a[4];
}

int main()
{
	int n;
	cin >> n;
	int *ptrtolist;
	ptrtolist = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> ptrtolist[i];
	}
	int a[5] = { 0 };
	int count1 = 0;
	int count2 = 0;
	int *p = new int[n];
	for (int i = 0; i < n / 2; i++)p[i] = 0;
	for (int i = 0; i < n; i++) {
		if (ptrtolist[i] % 5 == 0 && ptrtolist[i] % 2 == 0) {
			a[0] += ptrtolist[i];
		}
		else if (ptrtolist[i] % 5 == 2) {
			a[2]++;
		}
		else if (ptrtolist[i] % 5 == 3) {
			count1++;
			a[3] += ptrtolist[i];
		}
		else if (ptrtolist[i] % 5 == 4) {
			if (ptrtolist[i] > a[4])a[4] = ptrtolist[i];
		}
		else if (ptrtolist[i] % 5 == 1) {
			a[1]++;
			p[count2] = ptrtolist[i];
			count2++;
		}
	}
	process(a, count1, p, n);
    return 0;
}

