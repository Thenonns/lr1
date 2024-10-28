#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main(){
	string d;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string str1;
	string str2;
	getline(cin, str1);
	cin >> str2;
	if (str2.length() == 5) {
		str1.append(" " + str2);
		cout << str1;
	}
	else {
		cout << "Ошибка";
	}
	d.find(" ");
	cout << d;
}