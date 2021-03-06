// 1077.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

double average(int a[], int stu, int max, int min, int leagelcount) {
	double sum = 0;
	for (int i = 0; i < stu; i++) {
		sum += a[i];
	}
	sum = sum - max - min;
	return sum / (leagelcount - 2);
}

void _45(double a[], int n, int list[]) {
	for (int i = 0; i < n; i++) {
		//此处注意：浮点数0.5=0.49999999999999999999
		if (a[i] - static_cast<int>(a[i]) > 0.499)list[i] = static_cast<int>(a[i]) + 1;
		else list[i] = static_cast<int>(a[i]);
	}
	return;
}

int main()
{
	int n, m;									//n=6
	cin >> n >> m;
	double *p;									//学生打分结果，后变为最终结果
	int stu = n - 1;							//stu=5
	p = new double[n];
	for (int i = 0; i < n; i++) {
		int teacher = 0;
		cin >> teacher;
		int *ptrtolist;							//学生打分，n-1个
		ptrtolist = new int[stu];
		int leagelcount = 0;
		int max = 0, min = m;
		for (int i = 0; i < stu; i++) {
			cin >> ptrtolist[i];
			if (ptrtolist[i] >= 0 && ptrtolist[i] <= m) {
			//注意合法零分与不合法输入（置0）的区别
			leagelcount++;
			//不需要排序
			if (ptrtolist[i] > max)max = ptrtolist[i];
			if (ptrtolist[i] < min)min = ptrtolist[i];
			}
			else ptrtolist[i] = 0;
		}
		p[i] = average(ptrtolist, stu, max, min, leagelcount);
		p[i] = 0.5*(p[i] + teacher);
	}
	int *list;
	list = new int[n];
	_45(p, n, list);
	for (int i = 0; i < n; i++) {
		cout << list[i] << endl;
	}
    return 0;
}

