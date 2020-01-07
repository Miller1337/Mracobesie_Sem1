// VVP_20.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a, c = 0;
	string s;
	cout << "Enter line:";
	cin >> s;
	a = s.size();

	for (int i = 0; i <= a; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			c++;
		}
	}
	cout << c;
	system("PAUSE");
	return 0;
}
