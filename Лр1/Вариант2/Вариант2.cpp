#include <math.h>
#include <clocale>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double Y, A, B, C, D;
	printf_s("%s", "Введите а: "); // 6.84
	scanf_s("%lf", A);
	printf_s("%s", "Введите b: "); // 3.22
	scanf_s("%lf", B);
	printf_s("%s", "Введите c: "); // 4.00
	scanf_s("%lf", C);
	printf_s("%s", "Введите d: "); // 2.50
	scanf_s("%lf", D);
	Y = pow((A + B) / (C + D), 2);
	printf_s("Значение переменной Y=%lf", Y); // выводим значение переменной Y
}