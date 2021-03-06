// 1004.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class student {
private:
	string name;
	string stunum;
public:
	int grade;
	student(string n, string sn, int g) :name(n),stunum(sn),grade(g) {}
	student() = default;
	friend ostream& operator << (ostream &out, const student &s);
};
ostream& operator<<(ostream &out, const student &s) {
	out << s.name << " " << s.stunum;
	return out;
}


int main()
{
	int n;
	cin >> n;
	vector<student>stuarray(n);
	for (int i = 0; i < n; i++) {
		string temp_name, temp_stunum;
		int score;
		cin >> temp_name >> temp_stunum >> score;
		stuarray[i] = student(temp_name, temp_stunum, score);
	}
	//highest
	int highest_tag = stuarray.size() - 1;
	for (int i = 0; i < stuarray.size(); i++) {
		if (stuarray[i].grade > stuarray[highest_tag].grade) {
			highest_tag = i;
		}
	}
	cout << stuarray[highest_tag] << endl;
	//lowest
	int lowest_tag = stuarray.size() - 1;
	for (int i = 0; i < stuarray.size(); i++) {
		if (stuarray[i].grade < stuarray[lowest_tag].grade) {
			lowest_tag = i;
		}
	}
	cout << stuarray[lowest_tag] << endl;
    return 0;
}
