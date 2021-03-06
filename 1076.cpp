#include"stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int solve(string s) {
	int count = 0;
	for (char c : s) {
		count++;
		if (c == 'T')break;
	}
		switch (s[count-3]) {
		case 'A':return 1;
		case 'B':return 2;
		case 'C':return 3;
		case 'D':return 4;
		}
	}

int main() {
	int n;
	cin >> n;
	string buffer;
	getline(cin, buffer);
	string passwd;
	for (int i = 0; i < n; i++) {
		string s;
		getline(cin, s);
		string subpasswd = to_string(solve(s));
		passwd += subpasswd;
	}
	cout << passwd;
	return 0;
}

//不知道为何，23行语句必须加上，否则会有异常，导致异常退出；
//初步猜测可能是由于cin以空格为分隔符，getline以回车为分隔符