// 1053.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#define ERROR -0.01
using namespace std;



int main()
{
	int Ipossible = 0;
	int absoute = 0;
	int count, tcritical;
	double ecritical;
	cin >> count >> ecritical >> tcritical;
	for (int i = 0; i < count; i++) {
		bool Bpossible = false;
		int length;
		cin >> length;
		double *list;
		list = new double[length];
		for (int j = 0; j < length; j++)cin >> list[j];
		int count1 = 0;
		//低于阈值的天数
		for (int j = 0; j < length; j++) {
			if (list[j] - ecritical < ERROR)count1++;
		}
		if (count1 > length / 2) {
			Bpossible = true;
			Ipossible++;
		}
		if (Bpossible) {
			if (length > tcritical) {
				absoute++;
			}
		}
	}
	Ipossible = Ipossible - absoute;
	//如果 空置 就不会 可能空置
	double a1 = 100 * static_cast<double>(Ipossible) / static_cast<double>(count);
	double a2 = 100 * static_cast<double>(absoute) / static_cast<double>(count);
	cout << fixed << setprecision(1) << a1 << "%" << " " << fixed << setprecision(1) << a2 << "%";
    return 0;
}

