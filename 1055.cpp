// 1055.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include<map>
using namespace std;


int main()
{
	int allcount, row;
	cin >> allcount >> row;
	map<string, int>list;
	for (int i = 0; i < allcount; i++) {
		string name;
		int hight;
		cin >> name >> hight;
		list.insert(pair<string, int>(name, hight));
	}
	int numperrow = allcount / row;
	int lastrow = allcount - numperrow * row;
	sort(list.begin(),list.end(),);
    return 0;
}

