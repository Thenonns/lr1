#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	string path = "th.txt";
	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "Ошибка открытия файла" << endl;
	}
	else {
		cout << "Файл открыт" << endl;
		char sm;
		while (fin.get(sm)) {
			cout << sm;
		}
	}
}
