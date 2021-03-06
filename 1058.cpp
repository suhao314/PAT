// 1058.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void bubblesort(vector<int>&list) {
	bool sorted = false;
	int n = list.size();
	while(!sorted){
		sorted = true;
	for (int i = 1; i < n; i++) {
		if (list[i] < list[i - 1]) {
			swap(list[i - 1], list[i]);
			sorted = false;
		}
	}
	n--;
}
}

int answer2digi(string s) {
	int count = 0;
	for (char c : s) {
		switch (c) {
		case 'a':count += 1; break;
		case 'b':count += 2; break;
		case 'c':count += 4; break;
		case 'd':count += 8; break;
		case 'e':count += 16; break;
		default:count += 0;
		}
	}
	return count;
}

int main()
{
	int xsrs, tmgs;
	cin >> xsrs >> tmgs;
	vector<vector<int> >Tlist(tmgs);
	vector<int>zqxxgslst(tmgs);
	string buffer;
	getline(cin, buffer);
	for (int i = 0; i < tmgs; i++) {
		Tlist[i].resize(5);
		//i 题号 Tlist【】【[分值][选项个数][正确选项个数][答案][错误次数]】
		string s;
		getline(cin, s);
		Tlist[i][0] = static_cast<int>(s[0]) - 48;
		Tlist[i][1] = static_cast<int>(s[2]) - 48;
		Tlist[i][2] = static_cast<int>(s[4]) - 48;
		Tlist[i][3] = answer2digi(s);
	}
	vector<int>grades(xsrs);
	for (int i = 0; i < xsrs; i++) {
		for (int j = 0; j < tmgs; j++) {
			string s;
			getline(cin, s, ')');
			if (answer2digi(s) == Tlist[j][3]) {
				grades[i] += Tlist[j][0];
			}
			else {
				Tlist[j][4]++;
			}
}
		}
	for (int i = 0; i < xsrs; i++)cout << grades[i] << endl;
	int maxpos = -1;
	int max = -1;
	vector<int>parr(tmgs);
	for (int i = 0; i < tmgs; i++) {
		if (Tlist[i][4] > max) {
			max = Tlist[i][4];
			maxpos = i;
		}
	}
	if (max == 0)cout << "Too simple" << endl;
	else {
		cout << max;
		for (int i = 0; i < tmgs; i++) {
			if (Tlist[i][4] == max) {
				cout << " " << i + 1;
			}
		}
	}
    return 0;
}

