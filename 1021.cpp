// 1021.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int count[10] = { 0 };
	for (int c : s) {
		switch (static_cast<int>(c-48)) {
		case 0:count[0]++; break;
		case 1:count[1]++; break;
		case 2:count[2]++; break;
		case 3:count[3]++; break;
		case 4:count[4]++; break;
		case 5:count[5]++; break;
		case 6:count[6]++; break;
		case 7:count[7]++; break;
		case 8:count[8]++; break;
		case 9:count[9]++; break;
		}
	}

	for (int i = 0; i <10; i++) {
		if (count[i] != 0) cout << i << ":" << count[i] << endl;
	}
    return 0;
}

