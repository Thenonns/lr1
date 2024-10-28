#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h>
using namespace std;
class p {
public:
	double x = 0;
	double y = 0;
	void toch(double x2, double y2) {
		x = x2;
		y = y2;
	}
	void koo() {
		cout << "Kоординаты точки: " << x << ", " << y;
		cout << endl;
	}
};
class Linia : public p {
public:
	double x1 = 0;
	double y1 = 0;
	double len = sqrt((pow(x1 - x, 2)) + (pow(y1 - y, 2)));
	void pod(int x3, int y3) {
		x1 = x3;
		y1 = y3;
		len = sqrt((pow(x1-x,2))+ (pow(y1 - y, 2)));
	}
	void dl() {
		cout << "Длина отрезка: " << len;
		cout << endl;
	}
	void nk() {
		cout << "Координаты начала: " << x << ", " << y;
		cout << endl;
		cout << "Координаты конца: " << x1 << ", " << y1;
		cout << endl;
	}
	int koo() {
		return len;
	}
};
class Kvadrat : public Linia {
public:
	double t;
	double s;
	void S() {
		t = koo();
		s = pow(t, 2);
		cout << "Длина отрезка: " << t;
		cout << endl;
		cout <<"Площадь квадрата: " << s;
		cout << endl;
	}
};
void main() {
	setlocale(LC_ALL, "rus");
	cout << "Tochka:" << endl;
	p a;
	a.toch(1, 5);
	a.koo();
	cout << "Linia:" << endl;
	Linia b;
	b.toch(5, 4);
	b.pod(7, 10);
	b.nk();
	b.dl();
	cout << "Kvadrat: " << endl;
	Kvadrat c;
	c.toch(5, 4);
	c.pod(7, 10);
	c.S();
}