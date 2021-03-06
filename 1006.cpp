// 1006.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

//给出位数 563 = 3
int digits(int n) {
	for (int i = 1; n / static_cast<int>(pow(10, i)); i++);
	return n;
}

int main()
{
	int n;
	cin >> n;
	int m = digits(n);
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			cout << i;
		}
	}
	else if (m == 2) {
		int left_digits = n / 10;
		for (int i = 0; i < left_digits; i++) {
			cout << "S";
		}
	}
	else {
		int bai_left_digits = n / 100;
		for (int i = 0; i < bai_left_digits; i++) {
			cout << "B";
		}
		int shi_left_digits = (n / 10) % 10;
		for (int i = 0; i < shi_left_digits; i++) {
			cout << "S";
		}
		int right_digits = n % 10;
		for (int i = 1; i <= right_digits; i++) {
			cout << i;
		}
		
	}
	return 0;
}

