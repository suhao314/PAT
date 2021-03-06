// 1043.cpp: 定义控制台应用程序的入口点。
//
/*
给定一个长度不超过10000的、仅由英文字母构成的字符串。请将字符重新调整顺序，按“PATestPATest....”这样的顺序输出，并忽略其它字符。
当然，六种字符的个数不一定是一样多的，若某种字符已经输出完，则余下的字符仍按PATest的顺序打印，直到所有字符都被输出。

输入格式：

输入在一行中给出一个长度不超过10000的、仅由英文字母构成的非空字符串。

输出格式：

在一行中按题目要求输出排序后的字符串。题目保证输出非空。

输入样例：

redlesPayBestPATTopTeePHPereatitAPPT
输出样例：

PATestPATestPTetPTePePee
*/
#include<iostream>
#include<string>
#include "stdafx.h"
using namespace std;

void bubblesort(int array[], int n) {
	bool sorted = false;
	while (!sorted) {
		sorted = true;
		for (int i = 1; i < n; i++) {
			if (array[i] < array[i - 1]) {
				swap(array[i], array[i - 1]);
				sorted = false;
			}
		}
		n--;
	}
}


int get_min(int array[], int n) {
	bubblesort(array, n);
	return array[0];
}

int main()
{
	int Pcount = 0;
	int Acount = 0;
	int Tcount = 0;
	int tcount = 0;
	int ecount = 0;
	int scount = 0;
	string s;
	getline(cin, s);
	for (char c : s) {
		switch (c=static_cast<int>(c)) {
		case'P':Pcount++; break;
		case'A':Acount++; break;
		case'T':Tcount++; break;
		case't':tcount++; break;
		case'e':ecount++; break;
		case's':scount++; break;
		}
	}
	int count[] = { Pcount,Acount,Tcount,ecount,scount,tcount };
	int count_copy[] = { Pcount,Acount,Tcount,ecount,scount,tcount };
	int min = get_min(count_copy, 6);
	for (int i = 0; i < min; i++)cout << "PATest";
	int arr[6];
	for (int i = 0; i < 6; i++) {
		arr[i] = count[i] - min;
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < arr[i]; j++) {
			switch (i){
			case 0:cout << 'P'; break;
			case 1:cout << 'A'; break;
			case 2:cout << 'T'; break;
			case 3:cout << 'e'; break;
			case 4:cout << 'S'; break;
			case 5:cout << 't'; break;
			}
		}
	}
    return 0;
}

