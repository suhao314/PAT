// 1005.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<vector>
#include<iostream>
using namespace std;

/*递归解法
int solve(int n) {
	if (n == 1)return 0;
	else {
		static int count = 0;
		while (!(n % 2)) {					//n为偶数
			n /= 2;
			count++;
		}
		if (n == 1)return count;			//n=4,8,16...
		else {
			n = n * 3 + 1;
			solve(n);
		}
	}
}
*/

int solve(int n) {
	int count = 0;
	while (n != 1) {
		if (n % 2) {
			n = 3 * n + 1;
		}
		else {
			n /= 2;
			count++;
		}
	}
	return count;
}

int* res_array(int n) {
	int count_array = solve(n) + 1;
	//vector<int>res_array(count_array);
	int *res_array;
	res_array = new int[count_array];
	int count = 0;
	res_array[0] = n;
	while (n != 1) {
		if (n % 2) {
			n = 3 * n + 1;
		}
		else {
			n /= 2;
			res_array[count + 1] = n;
			count++;
		}
	}
	return res_array;
}


int main()
{
	int n;
	cin >> n;
	int* cover_array;
	int count = solve(n);	//可作为下标使用
	cover_array = new int(solve(n) + 1);
	cover_array = res_array(n);
	for (int i = 0; i < count;i++) {

	}
    return 0;
}

