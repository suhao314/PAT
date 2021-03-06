// 1057.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

long sum(string s) {
	long sum = 0;
	int lb1 = static_cast<int>('a');
	int lb2 = static_cast<int>('z');
	int cb1 = static_cast<int>('A');
	int cb2 = static_cast<int>('Z');
	for (char c : s) {
		int Ic = static_cast<int>(c);
		if (Ic >= lb1 && Ic <= lb2)sum += Ic - 96;
		if (Ic >= cb1 && Ic <= cb2)sum += Ic - 64;
	}
	return sum;
}
/*
int _1count(long sum) {
	static int count1 = 0;
	if (sum == 1)return 1 + count1;
	else {
		while (sum / 2) {
			count1 += sum % 2;
			sum /= 2;
			_1count(sum);
		}
	}
	return count1;
}
*/
int _1count(long sum) {
	static int count1 = 0;
	//递归基
	if (sum == 1)return ++count1;
	else {
		if (sum / 2) {
			count1 += sum % 2;
			sum /= 2;
			_1count(sum);
		}
	}
	return count1;
}
int _0count(long sum) {
	static int count0 = 0;
	if (sum == 2)return ++count0;
	else {
		if (sum / 2) {
			if (sum % 2);
			else count0++;
			sum /= 2;
			_0count(sum);
		}
	}
}

int main()
{
	string s;
	getline(cin, s);
	long a = sum(s);
	int b = _1count(a);
	int c = _0count(a);
	cout << c << " " << b;
    return 0;
}

