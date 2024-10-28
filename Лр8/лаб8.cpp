#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int fac(int f) {
	if (f == 1 || f == 0) {
		return 1;
	}
	else {
		return f * factorial(f - 1);
	}
}
int fun(int a) {
	
	return a-fac(f)
}
int main() {
	int f;
	int a;
	cin >> a;
	cin >> f;
	cout >> fac(f);
}