#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, d = 0, y = 1, eps;
	int n;
	int i, k;
	cin >> x;
	d = 1/pow((1-x),2);
	cout << d;
	cout << "\n";
	cout << "Точность:";
	cin >> eps;
	k = 2;
	n = 1;
	while (fabs(d - y) >= eps) {
		y = y + k * pow(x,n);
		k++;
		n++;
	}
	cout << "\n" << y;
}