// 1001.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int fun1(int m) {
	static int step = 0;
	if (m == 1)return step;
	else {
		while (!(m % 2)) {//偶数
			m /= 2;
			step += 1;
		}
		//奇数,=1
	}
	if (m == 1)return step;
	else m = 3 * m + 1;
	fun1(m);
}

int main()
{
	int m;
	cin >> m;
	int step=fun1(m);
	cout << step << endl;
    return 0;
}

