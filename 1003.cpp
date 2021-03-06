// 1003.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<string>
#include<iostream>
using namespace std;

bool judge0(string s) {
	bool flag = true;
	for (const auto &e : s) {
		if (e == 'P' || e == 'A' || e == 'T'){}
		else
		{
			flag = false;
			return false;
		}
	}																	//此处仅判断是否仅有PAT三种字母
	bool subflagP = false;
	bool subflagA = false;
	bool subflagT = false;
	for (const auto &e : s) {											//此处判断是否三种字母都齐全
		if (e == 'P') { subflagP = true; break; }
	}
	for (const auto &e : s) {
		if (e == 'A') { subflagA = true; break; }
	}
	for (const auto &e : s) {
		if (e == 'T') { subflagT = true; break; }
	}
	return (flag&&subflagA&&subflagP&&subflagT);
}

bool judge1(string s) {
	//PT仅能出现一次
	int pcount = 0;
	int tcount = 0;
	int acount = 0;
	for (const auto &e : s) {
		if (e == 'A')acount++;
		else if (e == 'P')pcount++;
		else if (e == 'T')tcount++;
	}
	if (pcount > 1 || tcount > 1)return false;
	else {
		//PT仅有一个，如果A有多个，P在T前出现且PT之间有A即可，A仅有一个的情况：PAT
		if (acount == 1 && pcount == 1 && tcount == 1) {
		//PAT
			if (s[0] == 'P'&&s[1] == 'A'&&s[2] == 'T')return true;
			else return false;
		}
		else {
		//PT仅有一个，A有多个，P在T前出现，且PT之间有A
			int i = 0;
			while (s[i] != 'P')i++;
			//记录P位置i
			int j = 0;
			while (s[j] != 'T')j++;
			//记录T位置j
			if (i > j)return false;
			else if (j - i == 1)return false;//PT之间没有A
			else return true;
			}
		}
	}

/*bool judge2(string s) {
	int i = 0;
	while (s[i] != 'P') {
		i++;											//AAAAAAPAAT
	}
}*/

int main()
{
	string s;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		string s;
		//getline(cin, s);
		cin >> s;
		if (judge0(s) && judge1(s))cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    return 0;
}

