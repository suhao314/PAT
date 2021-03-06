// 1063.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

/*void bubblesort(double list[], int n) {
	bool sorted = false;
	while (!sorted) {
		for (int i = 1; i < n; i++) {
			sorted = true;
			if (list[i - 1] > list[i]) {
				sorted = false;
				swap(list[i], list[i - 1]);
			}
		}
		n--;
	}
}*/

int main()
{
	int num;
	cin >> num;
	double *list;
	list = new double[num];
	for (int i = 0; i < num; i++) {
		int a, b;
		cin >> a >> b;
		double mod = sqrt(pow(a, 2) + pow(b, 2));
		list[i] = mod;
	}
	int maxpos = 0;
	double max = 0.0;
	for (int i = 0; i < num; i++) {
		if (list[i] > max) {
			maxpos = i;
			max = list[i];
		}
	}
	//bubblesort(list, num);
	cout << fixed << setprecision(2) << max;
    return 0;
}

