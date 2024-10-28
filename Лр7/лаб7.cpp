#include <iostream>
using namespace std;
int vv(int);
void mas(int(&ary)[5][5], const int n = 5) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			ary[i][j] = rand() % 10;
		}
	}

}
void aryt(int(&ary)[5][5], const int n = 5) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << ary[i][j] << " ";
		}
		cout << endl;
	}
}
void iff(int(&ary)[5][5], int h = 0, const int n = 5) {
	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < n - 2; j++) {
			if (ary[i][j] > h) {
				h = ary[i][j];
			}
		}
	}
	cout << "Максимальное значение:";
	cout << h;
}
void iv(int(&ary)[5][5], int sum = 0, const int n = 5) {
	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < n - 2; j++) {
			sum += ary[i][j];
		}
	}
	cout << "Сумма:";
	cout << sum;
}
int main()
{
	int b;
	cin >> b;
	const int n = 5;
	int ary[n][n];
	int h = 0, sum = 0;
	setlocale(LC_ALL, "Russian");
	mas((&ary)[n]);
	aryt((&ary)[n]);
	iff((&ary)[n], h);
	cout << endl;
	iv((&ary)[n], sum);
	cout << endl;
	vv(b);
}
int vv(int b) {
	switch (b) {
	case 5:
		cout << "Пять";
		break;
	case 6:
		cout << "шесть";
		break;
	case 7:
		cout << "Семь";
		break;
	}
	return b;
}
