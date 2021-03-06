// 1016.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
#include<string>

int count_of_part_showed(string s, int n) {
	int count = 0;
	for (char c : s) {
		if (static_cast<int>(c) - 48 == n) {
			count++;
		}
	}
	return count;
}

long long numbers_plus(int part_1, int part_2, int count_1, int count_2) {
	long long sum1 = 0, sum2 = 0;
	for (int i = 1; i < count_1; i++) {
		sum1 += static_cast<int>(pow(10, i))*part_1;
	}
	//sum1 += part_1;
	if (count_1 == 0)sum1 = 0;
	else {
		sum1 += part_1;
	}
	for (int i = 1; i < count_2; i++) {
		sum2 += static_cast<int>(pow(10, i))*part_2;
	}
	//sum2 += part_2;
	if (count_2 == 0)sum2 = 0;
	else {
		sum2 += part_2;
	}
	return sum1 + sum2;
}

int main()
{
	int part1, part2;
	string num1, num2;
	cin >> num1 >> part1 >> num2 >> part2;
	int count1 = count_of_part_showed(num1, part1);
	int count2 = count_of_part_showed(num2, part2);
	cout << numbers_plus(part1, part2, count1, count2);
    return 0;
}

