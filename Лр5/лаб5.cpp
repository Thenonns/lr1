#include <iostream>
using namespace std;
const unsigned int m = 5;
const unsigned int n = 5;
int ary[m][n];
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, j;
	int sum = 0;
	int h = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++) {
			ary[i][j] = rand() %10;
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++) {
			cout << ary[i][j] << " ";
		}
		cout << endl;
	}
	cout <<" Сумма элементов "<< endl;
	for (i = 0; i < m - 2; i++) {
		for (j = 0; j < n - 2; j++) {
			if (ary[i][j] > h) {
				h = ary[i][j];
			}
			sum = sum + ary[i][j];
		}
	}
	cout << sum;
	cout << endl;
	cout << "Максимальный элемент массива:" << h;
}    