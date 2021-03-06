// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

class Complex {
private:
	double x, y;
	double mod;
	double ang;
public:
	Complex(double a, double b,int chongzai) :mod(a), ang(b) {
		x = mod * cos(ang);
		y = mod * sin(ang);
	}
	Complex(double a, double b) :x(a), y(b) {}
	Complex() = default;
	double getm() const { return mod; }
	double geta() const { return ang; }
	double getx() const { return x; }
	double gety() const { return y; }
	friend ostream& operator <<(ostream &out, const Complex &c);
};

Complex mult(double a,double b,double c,double d) {
	double ang = b + d;
	double mod = a * c;
	return Complex(mod, ang, 1);
}
ostream& operator<<(ostream &out, const Complex &c) {
	if (c.getx()>-0.005&&c.getx()<0)
		printf("0.00");
	else
		printf("%.2lf", c.getx());
	if (c.gety()>-0.005&&c.gety()<0)
		printf("+0.00i");
	else if (c.gety() <= -0.005)
		printf("%.2lfi", c.gety());
	else printf("+%.2lfi", c.gety());
	return out;
}

int main()
{
	double q, w, e, r;
	cin >> q >> w >> e >> r;
	Complex result = mult(q,w,e,r);
	cout << result;
    return 0;
}

/*
思路：本题的坑主要是在比如当P的值为-0.0023的时候，取两位小数，则得到的值为-0.00，
按照题意此时应该输出0.00才行，考虑到若P在-0.005~0之间，则会四舍五入到-0.00，
所以当0.005<P<0,输出0.00，否则正常输出。
再看R，同样，当0.005<R<0的时候，应输出+0.00i，若R<=-0.005，则正常输出后加上i，若R大于等于0，则应输入正常输出前有+，后有i。`
*/