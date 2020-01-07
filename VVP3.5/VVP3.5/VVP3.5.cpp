// VVP3.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x = 0, y = 0;
	cout << "Enter x:";
	cin >> x;

	y = 4 * (pow((x - 3), 6)) - 7 * (pow((x - 3), 3)) + 2;
	cout << "y=" << y << endl;

	system("pause");
	return 0;
}

