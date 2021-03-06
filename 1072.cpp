// 1072.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;

int main()
{
	int M, N;
	cin >> N >> M;
	int *banlist = new int[M];
	for (int i = 0; i < M; i++)cin >> banlist[i];
	int stucount = 0;
	int bancount = 0;
	for (int i = 0; i < N; i++) {
		bool flag = false;
		string name;
		int num;
		cin >> name >> num;
		int *object = new int[num];
		for (int j = 0; j < num; j++)cin >> object[j];
		for (int j = 0; j < num; j++) {
			for (int k = 0; k < M; k++) {
				if (object[j] == banlist[k]) {
					flag = true;
					bancount++;
				}
			}
		}
		if (flag) {
			cout << name << ":";
			stucount++;
		}
		for (int j = 0; j < num; j++) {
			for (int k = 0; k < M; k++) {
				if (object[j] == banlist[k]) {
					//此处注意0000的特殊情况，可能会输出为“   0”
					printf(" %04d", banlist[k]);
				}
			}
		}
		if (flag)cout << endl;
	}
	cout << stucount << " " << bancount;
	return 0;
}

