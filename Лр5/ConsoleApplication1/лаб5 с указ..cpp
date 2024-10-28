#include <iostream>
using namespace std;
const unsigned int m = 5;
const unsigned int n = 5;
int *yk;
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
			ary[i][j] = rand() % 10;
			cout << ary[i][j] << " ";
			yk[i][j] = &ary[i][j];
		}
		cout << endl;
	}
	cout << " Сумма элементов " << endl;
	for (i = 0; i < m - 2; i++) {
		for (j = 0; j < n - 2; j++) {
			if (*yk[i][j] > h) {
				h = *yk[i][j];
			}
			sum = sum + *yk[i][j];
		}
	}
	cout << sum;
	cout << endl;
	cout << "Максимальный элемент массива:" << h;
}

yk = arr[][];
cout<<*yk