// 1061.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int num_stu, T_num;
	cin >> num_stu >> T_num;
	vector<int>gradeperT(T_num);
	for (int i = 0; i < T_num; i++)cin >> gradeperT[i];
	vector<int>answer(T_num);
	vector<int>sta_stu(num_stu);
	for (int i = 0; i < T_num; i++)cin >> answer[i];
	for (int i = 0; i < num_stu; i++) {
		vector<int>test(T_num);
		for (int j = 0; j < T_num; j++)cin >> test[j];
		for (int k = 0; k < T_num; k++) {
			if (test[k] == answer[k]) {
				sta_stu[i] += gradeperT[k];
			}
		}
	}
	for (int i = 0; i < num_stu; i++)cout << sta_stu[i] << endl;
    return 0;
}

