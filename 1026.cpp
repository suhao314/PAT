// 1026.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _45(double a) {
	return (a - static_cast<int>(a) > 0.49) ? static_cast<int>(a + 1) : static_cast<int>(a);
}

int main()
{
	int t1, t2;
	cin >> t1 >> t2;
	double durance = (static_cast<double>(t2) - static_cast<double>(t1)) / 100;
	int Idurance = _45(durance);
	int hour = Idurance / 3600;
	int minute = (Idurance - hour * 3600) / 60;
	int second = Idurance - minute * 60 - hour * 3600;
	if (hour < 10)cout << "0";
	cout << hour << ":";
	if (minute < 10)cout << "0";
	cout << minute << ":";
	if (second < 10)cout << "0";
	cout << second;
    return 0;
}

