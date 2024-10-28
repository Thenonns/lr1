#include <fstream>
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	ifstream ifs("the.txt");
	if (!ifs.is_open())
	{
		cerr << "Файл отсутсвует" << endl;
		return 1;
	}
	string s;
	string to_delete = ",";
	string to_delete1 = "-";
	string to_delete2 = ":";
	string to_delete3 = ";";
	string to_delete4 = ".";
	getline(ifs, s, '\"');
	//cout << s;
	//cout << "Новый текст";
	size_t start{ s.find(to_delete) };
	size_t start1{ s.find(to_delete1) };
	size_t start2{ s.find(to_delete2) };
	size_t start3{ s.find(to_delete3) };
	size_t start4{ s.find(to_delete4) };
	while (start != string::npos) // 
	{
		s.erase(start, to_delete.length());
		start = s.find(to_delete, start + to_delete.length());
		
		while (start1 != string::npos)
		{
			s.erase(start1, to_delete1.length());
			start1 = s.find(to_delete1, start1 + to_delete1.length());
			
			while (start2 != string::npos)
			{
				s.erase(start2, to_delete2.length());
				start2 = s.find(to_delete2, start2 + to_delete2.length());
				
				while (start3 != string::npos)
				{
					s.erase(start3, to_delete3.length());
					start3 = s.find(to_delete3, start3 + to_delete3.length());
					
					while (start4 != string::npos)
					{
						s.erase(start4, to_delete4.length());
						start4 = s.find(to_delete4, start4 + to_delete4.length());
						
					}
				}
			}
		}
	}
	//cout << s << endl;
	ofstream ofs("non.txt");
	ofs << s;
	ofs.close();
}