// 1071.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

bool judgewin(int n1, int n2, int b) {
	if ((n1 > n2) && b == 1)return false;
	else if ((n1 > n2) && b == 0)return true;
	else if ((n1 < n2) && b == 0)return false;
	else if ((n1 < n2) && b == 1)return true;
}

int main()
{
	int K;
	static int T;
	cin >> T >> K;
	for (int i = 0; i < K; i++) {
		int n1, b, t, n2;
		cin >> n1 >> b >> t >> n2;
		if (T==0) {
			cout << "Game Over." << endl;
			break;
		}
		if (t > T) {
			cout << "Not enough tokens.  Total = " << T << "." << endl;
			continue;
		}
		else {
			if (judgewin(n1, n2, b)) {
				T += t;
				cout << "Win " << t << "!  Total = " << T << "." << endl;
			}
			else {
				T -= t;
				cout << "Lose " << t << ".  Total = " << T << "." << endl;
			}
		}
}
    return 0;
}

