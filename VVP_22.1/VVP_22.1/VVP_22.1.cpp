#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ru");
	int l, a=0;
	string s;
	ifstream file("22.1");
	getline(file, s); // считали строку из файла
	file.close(); // закрываем файл
	cout << s << endl; // напечатали эту строку
	l = s.length();
	for (int i = 0; i < l; i++) if (s[i] == ' ') {
		a = i;
		break;
	}
	s.erase(0, a + 1);
	cout << s << endl;
	ofstream fof("22.1");
	fof << s;
	system("PAUSE");
	return 0;
}
