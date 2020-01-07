#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a=0;
	string s;
	cout << "Введите предложение:"<<endl;
	getline(cin, s);
	s.length();
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'а' || s[i] == 'е' || s[i] == 'ё' || s[i] == 'и' || s[i] == 'о' || s[i] == 'у' || s[i] == 'ы' || s[i] == 'э' || s[i] == 'ю' || s[i] == 'я'||s[i] == 'А' || s[i] == 'Е' || s[i] == 'Ё' || s[i] == 'И' || s[i] == 'О' || s[i] == 'У' || s[i] == 'Ы' || s[i] == 'Э' || s[i] == 'Ю' || s[i] == 'Я')
		{
			a++;
		}
	}
	cout << a <<endl;
	system("pause");
	return 0;
}