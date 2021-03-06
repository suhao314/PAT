// 1002.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int main()
{
	string s;
	getline(cin, s);
	int count = 0;
	for (const auto &e : s) {
		count += (static_cast<int>(e) - 48);
	}
	int num = 0;						//位数
	int count_copy = count;
	while (count_copy != 0) {
		num++;
		count_copy /= 10;				//50=2 5=1，最多=3,999
	}
	if (num == 1) {						//个位数答案
		switch (count) {
		case 0:cout << "ling"; break;
		case 1:cout << "yi"; break;
		case 2:cout << "er"; break;
		case 3:cout << "san"; break;
		case 4:cout << "si"; break;
		case 5:cout << "wu"; break;
		case 6:cout << "liu"; break;
		case 7:cout << "qi"; break;
		case 8:cout << "ba"; break;
		case 9:cout << "jiu"; break;
		}
	}
	else {								//2,3位数答案，先输出第一位
		int first_num = count / static_cast<int>(pow(10, num - 1));
		switch (first_num) {
		case 0:cout << "ling"; break;
		case 1:cout << "yi"; break;
		case 2:cout << "er"; break;
		case 3:cout << "san"; break;
		case 4:cout << "si"; break;
		case 5:cout << "wu"; break;
		case 6:cout << "liu"; break;
		case 7:cout << "qi"; break;
		case 8:cout << "ba"; break;
		case 9:cout << "jiu"; break;
		}
		if (num == 2) {
			int digits = count % 10;
			switch (digits) {
		case 0:cout << " ling"; break;
		case 1:cout << " yi"; break;
		case 2:cout << " er"; break;
		case 3:cout << " san"; break;
		case 4:cout << " si"; break;
		case 5:cout << " wu"; break;
		case 6:cout << " liu"; break;
		case 7:cout << " qi"; break;
		case 8:cout << " ba"; break;
		case 9:cout << " jiu"; break;
		}
		}
		else {
			int second_digit = (count / 10) % 10;
				switch (second_digit) {
				case 0:cout << " ling"; break;
				case 1:cout << " yi"; break;
				case 2:cout << " er"; break;
				case 3:cout << " san"; break;
				case 4:cout << " si"; break;
				case 5:cout << " wu"; break;
				case 6:cout << " liu"; break;
				case 7:cout << " qi"; break;
				case 8:cout << " ba"; break;
				case 9:cout << " jiu"; break;
				}
				int last_digit = count % 10;
				switch (last_digit) {
				case 0:cout << " ling"; break;
				case 1:cout << " yi"; break;
				case 2:cout << " er"; break;
				case 3:cout << " san"; break;
				case 4:cout << " si"; break;
				case 5:cout << " wu"; break;
				case 6:cout << " liu"; break;
				case 7:cout << " qi"; break;
				case 8:cout << " ba"; break;
				case 9:cout << " jiu"; break;
				}
		}
	}
    return 0;
}

