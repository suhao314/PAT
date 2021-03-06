// 1001.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int solve(int n) {
	if (n == 1)return 0;
	else {
		static int count = 0;
		while (!(n % 2)) {					//n为偶数
			n /= 2;
			count++;
		}
		if (n == 1)return count;			//n=4,8,16...
		else {
			n = n * 3 + 1;
			solve(n);
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int count = solve(n);
	cout << count;
    return 0;
}

