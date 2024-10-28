#include <iostream>
#include <time.h>
using namespace std;
const unsigned int n = 5;
int ary[n][n];
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int i, j,x ,g, f;
	int a = 0;
	int sum = 0;
	int h = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++) {
			ary[i][j] = rand() % 10;
			cout << ary[i][j] << " ";
		}
		cout << endl;
	}
	cout << " Сумма элементов " << endl;
	for (i = 0; i < n - 2; i++) {
		for (j = 0; j < n - 2; j++) {
			if (ary[i][j] > h) {
				h = ary[i][j];
			}
			sum = sum + ary[i][j];
		}
	}
	cout << sum;
	cout << endl;
	for (i = 0; i < n - 2; i++)
	{
		for (j = 0; j < n - 2; j++) {
			cout << ary[i][j] << " ";
			x = ary[0][2];
			g = ary[1][1];
			f = ary[0][3];
			
		}
		cout << endl;
	}
	cout << "Побочная диагональ" << x << g << f;
	
	cout << "Максимальный элемент массива:" << h;
}