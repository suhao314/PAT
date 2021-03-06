// 1064.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int> &list, int n) {
	bool sorted = false;
	while (!sorted) {
		sorted = true;
for (int i = 1; i < n; i++) {
		if (list[i - 1] > list[i]) {
			sorted = false;
			swap(list[i], list[i - 1]);
		}
	}
n--;
	}
	
}

int sum(int n) {
	int s = 0;
	while (n / 10) {
		s += n % 10;
		n /= 10;
	}
	s += n;
	return s;
}

int main()
{
	int n;
	cin >> n;
	vector<vector<int> >list(n);
	for (int i = 0; i < n; i++)list[i].resize(2);
	for (int i = 0; i < n; i++) {
		cin >> list[i][0];
		list[i][1] = sum(list[i][0]);
	}
	vector<int>res(n);
	for (int i = 0; i < n; i++) {
		res[i] = list[i][1];
}
	bubblesort(res, n);
	int count = 1;
	for (int i = 1; i < n; i++) {
		if (res[i] != res[i - 1])count++;
	}
	cout << count << endl;
	cout << res[0];
	for (int i = 1; i < n; i++) {
		if (res[i] != res[i - 1])cout << " " << res[i];
	}
    return 0;
}

