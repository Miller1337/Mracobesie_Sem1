
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	int a = 0, b;
	string s;
	cout << "Введите предложение:"<<endl;
	getline(cin, s);
	b = s.length();
	for (int i = 1; i < b - 1; i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
		{
			a++;
		}
	}
	cout << "количество слов: " << a + 1;

}

