// 1082.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

class player {
private:
	//string ID = 0000;
	//此处不能给string赋初值
	string ID;
	int x, y;
	
public:
	double distance;
	player(string id, int xx, int yy) :ID(id), x(xx), y(yy) {
		distance = sqrt(pow(x, 2) + pow(y, 2));
	}
	player() = default;
	string getid() {
		return ID;
	}
};


int main()
{
	int num;
	cin >> num;
	vector<player>list(num);
	//player *list = new player[num];
	for (int i = 0; i < num; i++) {
		string s;
		int x, y;
		cin >> s >> x >> y;
		list[i] = player(s, x, y);
	}
	int maxpos = 0;
	int minpos = 0;
	double maxd = 0;
	double mind = 10;
	for (int i = 0; i < num; i++) {
		if (list[i].distance < mind) {
			mind = list[i].distance;
			minpos = i;
		}
		if (list[i].distance > maxd) {
			maxd = list[i].distance;
			maxpos = i;
		}
	}
	cout << list[minpos].getid() << " " << list[maxpos].getid();
    return 0;
}

