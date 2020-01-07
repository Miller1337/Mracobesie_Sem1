// VVP_22.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a = 0;
	string s;
	string s1;
	ifstream f("22.5");
	getline(f, s);
	while (s1 != s) {
		s1 = s;
		if (s[0] == ' ' && s[1] == ' ' && s[2] == ' ' && s[3] == ' ' && s[4] == ' ')  a++; 
		getline(f, s);
	}
	f.close();
	cout << a;
	system("pause");
	return 0;
}

