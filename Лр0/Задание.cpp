#include <iostream>


using namespace std;
int main()
{
	setlocale(0, "");
	int x = 15;
	int y = 4;
	int Сумма;
	Сумма = x + y;
	int Разность;
	Разность = x - y;
	int Произведение;
	Произведение = x * y;
	int Отношение;
	Отношение = x / y;
	cout << "Сумма x+y = " << x + y << endl;
	cout << "Разность x-y = " << x - y << endl;
	cout << "Произведение x*y = " << x * y << endl;
	cout << "Отношение x/y = " << x / y << endl;
	return 0;
}