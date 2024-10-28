#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
		int i = 0, index = 0;
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		string str1;
		string str2;
		getline(cin, str1);
		while (str1.find(' ', index) != -1) {
			index = str1.find(' ', index + 1);
			i++;
		}
		cout << i << endl;
		cin >> str2;
		if (str2.length() == 5) {
			str1.append(" " + str2);
			cout << str1;
		}
		else {
			cout << "Ошибка";
		}
}
