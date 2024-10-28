#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double Y, A, B, C, D;
	A = 6.84;
	B = 3.22;
	C = 4.00;
	D = 2.50;
	Y = pow((A + B) / (C + D), 2);
	cout << "y=" << Y << endl;
}