#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double s1, s2, s3, s4, s5, y, a, b, c, d;
	a = 6.84;
	b = 3.22;
	c = 4.00;
	d = 2.50;
	s1 = a+b;
	s2 = c+d;
	s3 = s1/s2;
	s4 = pow(s3,2);
	s5 = pow(b,2);
	y = s4+s5;
	cout << "y=" << y << endl;
}