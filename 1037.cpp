// 1037.cpp: 定义控制台应用程序的入口点。
//
/*
#include "stdafx.h"
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

long amount(double a, double b) {
	long sum = 0;
	int k = static_cast<int>(b * 100);
	int n = k / 10;
	n *= 10;
	if (abs(k-n)<1) sum += b * 10;
	else sum += b * 100;
	int g = static_cast<int>(a) * 493;
	sum += g;
	double s = a - static_cast<int>(a);
	s *= 100;
	n = s / 10;
	n *= 10;
	if (abs(n-s)<1) sum += 29 * s / 10;
	else sum += s * 29;
	return sum;
}

void convert(long p, long a) {
	long distance = a - p;
	if (distance > 0) {
		int s = distance % 29;
		int g = s % 17;
		int k = distance - s * 29 - g * 17 * 29;
		cout << g << "." << s << "." << k;
	}
	else if (distance = 0)cout << "0.0.0";
	else {

	}
}

int main()
{
	double pa, pb, aa, ab;
	cin >> pa >> pb >> aa >> ab;
	long psum = amount(pa, pb);
	long asum = amount(aa, ab);
	convert(psum, asum);
    return 0;
}
*/
#include "stdafx.h"
#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
using namespace std;

long amount(int g,int s,int k) {
	long sum = 0;
	sum += k;
	sum += 29 * s;
	sum += g * 29 * 17;
	return sum;
}

void convert(long p, long a) {
	long exchange = a - p;
	if (exchange > 0) {
		int g = exchange / (29 * 17);
		int s = (exchange - g * 17 * 29) / 29;
		int k = (exchange - g * 29 * 17 - s * 29);
		cout << g << "." << s << "." << k;
	}
	else if (exchange == 0)cout << "0.0.0";
	else {
		exchange = -1 * exchange;
		int g = exchange / (29 * 17);
		int s = (exchange - g * 17 * 29) / 29;
		int k = (exchange - g * 29 * 17 - s * 29);
		cout << "-" << g << "." << s << "." << k;
	}
}

int main()
{
	string s1, s2, s3, s4, s5, s6;
	getline(cin, s1, '.');
	getline(cin, s2, '.');
	getline(cin, s3, ' ');
	getline(cin, s4, '.');
	getline(cin, s5, '.');
	getline(cin, s6);
	int pg, ps, pk, ag, as, ak;			//p应付
	pk = atoi(s3.c_str());
	ps = atoi(s2.c_str());
	pg = atoi(s1.c_str());
	ak = atoi(s6.c_str());
	as = atoi(s5.c_str());
	ag = atoi(s4.c_str());
	long a = amount(ag, as, ak);
	long p = amount(pg, ps, pk);
	convert(p, a);
	return 0;
}