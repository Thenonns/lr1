#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string path = "ttx.txt";
	ifstream fin;
	fin.open(path);
	int i = 0, sch = 0;
	if (!fin.is_open()) {
		cout << "Ошибка открытия файла" << endl;
	}
	else {
		cout << "Файл открыт" << endl;
		char smv;
		while (fin.get(smv)) {
			cout << smv;
			i++;
			if (smv == ' ') {
				if (i == 1) {
					sch++;
					i = 0;
					cout << "   ***НУЖНОЕ СЛОВО***   ";

				}
				else if (i == 2) {
					sch++;
					i = 0;
					cout << "   ***НУЖНОЕ СЛОВО***   ";

				}
				else if (i == 3) {
					sch++;
					i = 0;
					cout << "   ***НУЖНОЕ СЛОВО***   ";

				}
				else if (i == 4) {
					sch++;
					i = 0;
					cout << "   ***НУЖНОЕ СЛОВО***   ";

				}
				else if (i == 5) {
					sch++;
					i = 0;
					cout << "   ***НУЖНОЕ СЛОВО***   ";

				}
				else {
					i = 0;
				}

			}
			else if ((smv == ',') || (smv == '!') || (smv == '?') || (smv == ';') || (smv == ':') || (smv == '.')) {
				if (i == 1) {
					sch++;
					i = -1;
					cout << "   ***НУЖНОЕ СЛОВО***   ";

				}
				else if (i == 2) {
					sch++;
					i = -1;
					cout << "   ***НУЖНОЕ СЛОВО***   ";

				}
				else if (i == 3) {
					sch++;
					i = -1;
					cout << "   ***НУЖНОЕ СЛОВО***   ";

				}
				else if (i == 4) {
					sch++;
					i = -1;
					cout << "   ***НУЖНОЕ СЛОВО***   ";

				}
				else if (i == 5) {
					sch++;
					i = -1;
					cout << "   ***НУЖНОЕ СЛОВО***   ";

				}
				else if (i == 6) {
					sch++;
					i = -1;
					cout << "   ***НУЖНОЕ СЛОВО***   ";

				}
				else {
					i = 0;
				}

			}
		}
	}
	fin.close();
	cout << endl << sch;
}