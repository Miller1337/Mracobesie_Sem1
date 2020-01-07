// VVP_12.4cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int Quarter(int x, int y)
{
	int a = 0;
	if (x > 0 && y > 0)
		a = 1;
	if (x < 0 && y > 0)
		a = 2;
	if (x < 0 && y < 0)
		a = 3;
	if (x > 0 && y < 0)
		a = 4;
	return a;
}

int main()
{
	int x, y;
	cout << "Enter x , y :";
	cin >> x >> y;
	if (x != 0 && y != 0)
	{
		cout << Quarter(x, y) << " coordinate quarter" << endl;
	}
	else
	{
		cout << "error" << endl;
	}
	system("pause");
	return 0;
}

