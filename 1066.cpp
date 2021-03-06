// 1066.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void output(vector<int>list, int c) {
	for (int i = 0; i < c; i++) {
		if (i == 0) {
			if (list[i] < 10)cout << "00" << list[i];
			else if (list[i] < 100)cout << "0" << list[i];
			else cout << list[i];
		}
		else {
			if (list[i] < 10)cout << " 00" << list[i];
			else if (list[i] < 100)cout << " 0" << list[i];
			else cout << " " << list[i];
		}
	}
	cout << endl;
}

int main()
{
	int r, c;
	cin >> r >> c;
	int A, B;
	cin >> A >> B;
	int color;
	cin >> color;
	vector<vector<int> >list(r);
	for (int i = 0; i < r; i++)list[i].resize(c);
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> list[i][j];
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (list[i][j] >= A && list[i][j] <= B)list[i][j] = color;
		}
	}
	for (int i = 0; i < r; i++) {
		output(list[i], c);
	}
    return 0;
}

