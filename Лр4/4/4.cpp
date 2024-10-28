#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int thenon = 15;
	int a = 0, i = 0, k = 0;
	int mass[thenon];
	for (int i = 0; i < thenon; i++) {
		mass[i] = rand() % 15 + -5;
		cout << mass[i] << " ";
	}
	for (int i = 0; i < thenon; i++) {
		if (mass[i]>1 and mass[i]<11) {
			a = mass[i]*mass[i];
			cout << "\n";
			cout << a;
			k++;
		}
	}
	a = k;
	cout << "\n";
	cout <<"Количество чисел из промежутка 1 до 11: "<<a;
}