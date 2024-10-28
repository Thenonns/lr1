#include <iostream>
using namespace std;
const int n = 15;//Количество элементов в массиве
int main()
{
	setlocale(LC_ALL, "russian");
	int *a;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = 1 + rand() % 20;
		cout << a[i] << " ";
	}


	delete[]a; // освобождаем память
	return 0;
}