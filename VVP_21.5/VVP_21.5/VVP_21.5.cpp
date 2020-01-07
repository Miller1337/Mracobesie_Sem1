#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int  d;
	string s;
	cout << "Введите полное имя файла:" << endl;
	getline(cin, s);
	for (int i = s.find_last_of(92)+1; i < s.find_last_of('.'); i++) 
	{
		cout << s[i];
	}
	cout <<endl;
	system("pause");
	return 0;
}
