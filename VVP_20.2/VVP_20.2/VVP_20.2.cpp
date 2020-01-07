// VVP_20.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<string>
using namespace std;
int main()
{
	int a;
	string s;
	cout << "Enter Letters:";
	cin >> s;
	a = s.size();

	for (int i = 0; i <= a; i++)
	{
		cout << s[i] << " ";
	}
	system("pause");
	return 0;

}
