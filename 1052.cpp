// 1052.cpp: 定义控制台应用程序的入口点。
//

/*
[╮][╭][o][~\][/~][<][>]
[╯][╰][^][-][=][>][<][@][⊙]
[Д][▽][_][ε][^]
4
1 1 2 2 2
6 8 1 5 5
3 3 4 3 3
2 10 3 9 3
*/

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

void output(string s,int i) {

	//[╮][╭][o][~\][/~][<][>]
	int leftcount = 0;
	int leftpos = 0;
	while (leftcount < i) {
		if (s[leftpos] == '['&&s[leftpos + 1] != ']')leftcount++;
		leftpos++;
		//leftpos将会指向实际的表情符号，即[后一位
	}
	int rightpos = leftpos + 1;
	while (s[rightpos] != ']') {
		rightpos++;
		//rightpos指向]
	}
	for (int j = leftpos; j < rightpos; j++)cout << s[j];

}

int main()
{
	string hand, eye, mouth;
	getline(cin, hand);
	getline(cin, eye);
	getline(cin, mouth);
	int handcount = 0;
	int eyecount = 0;
	int mouthcount = 0;
	int pos = 0;
	for (char c : hand) {
		pos++;
		if (c == '['&&hand[pos] != '[')handcount++;
	}
	pos = 0;
	for (char c : eye) {
		pos++;
		if (c == '['&&eye[pos] != '[')eyecount++;
	}
	pos = 0;
	for (char c : mouth) {
		pos++;
		if (c == '['&&mouth[pos] != '[')mouthcount++;
	}
	int n;
	cin >> n;
	int choice[6] = { 0 };
	for (int i = 0; i < n; i++) {
		bool illeagelchoice = false;
		//存在非法选择，进行下一轮循环
		for (int j = 1; j < 6; j++) {
			cin >> choice[j];
			switch (j) {
			case 1:
			case 5:if (choice[j] > handcount || choice[j] <= 0) {
				illeagelchoice = true;
				cout << "Are you kidding me? @\\/@" << endl;
			}break;
			case 2:
			case 4:if (choice[j] > eyecount || choice[j] <= 0) {
				illeagelchoice = true;
				cout << "Are you kidding me? @\\/@" << endl;
			}break;
			case 3:if (choice[j] > mouthcount || choice[j] <= 0) {
				illeagelchoice = true;
				cout << "Are you kidding me? @\\/@" << endl;
			}break;
			}
		}
		
		if (!illeagelchoice) {
			output(hand, choice[1]);
			cout << "(";
			output(eye, choice[2]);
			output(mouth, choice[3]);
			output(eye, choice[4]);
			cout << ")";
			output(hand, choice[5]);
			cout << endl;

		}
		else break;
	
	
	
	}

return 0;		
	}
    
