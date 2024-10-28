#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int siia = 15;
	int k=0;
	double a=0;
	double mass[siia];
	for (int i = 0; i < siia; i++) {
		mass[i] = rand() % 40 + -15;
		cout << mass[i] << " ";
	}
	for (int i = 0; i < siia; i++) {
		if (mass[i]<5 and mass[i]>-15) {
			a = a + mass[i];
			k++;
		}
	}
	a = a / k;
	cout << "\n";
	cout <<"Среднее арифметическое: "<<a;
}