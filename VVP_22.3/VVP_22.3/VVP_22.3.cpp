// VVP_22.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s, s1;
	ifstream f1("1.txt");
	ifstream f2("2.txt");
	getline(f1, s);
	getline(f2, s1);
	f1.close();
	ofstream f11("1.txt");
	f11 << s1;
	f11 << s;
	cout << "Done";
	system("PAUSE");
	return 0;
}

