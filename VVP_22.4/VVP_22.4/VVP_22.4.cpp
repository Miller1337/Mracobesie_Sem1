// VVP_22.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <fstream>
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int l, a, N, K, i, j;
	string s;
	string s1;
	ifstream f("22.4");
	getline(f, s);
	f.close();
	s1 += s[0];
	for (int i = 1; i < s.length(); i++)
	{
		if ((s[i] != ' ') || ((s[i] == ' ') and (s[i - 1] != ' '))) s1 += s[i];
	}
	ofstream f1("22.4");
	f1 << s1;
	system("Pause");
	return 0;
}


