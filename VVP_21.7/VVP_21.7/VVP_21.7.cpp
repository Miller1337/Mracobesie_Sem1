// VVP_21.7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Ru");
	int a = 0, i, b;
	cout << "Введите предложение:" << endl;//лучше на английском
	string s;
	string s1;
	getline(cin, s);
	s1 = s;
	b = s.length();
	for (i = 0; i < b; i++)
	{
		if (i % 2 == 1)
		{
			s1[i / 2] = s[i];
		}
	}
	for (i = b - 1; i >= b / 2; i--) 
	{
		s1[i] = s[a];
		a += 2;
	}
	cout << s1 << endl;
	system("PAUSE");
	return 0;
}
