#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	cout << "������� ���������� ����� : ";
	cin >> x >> y;
	if ((x < 0.2 && y < 0) && (x*x + y * y < 1))
		cout << "������ �������������� �������";
	else if ((x*x + y * y > 1) || (x > 0,2) && ( y > 0) || (x > 0,2)&&(y < 0))
		cout << "��� �������������� �������";
	else
		cout << "�� ������� ���� �������";
	
}