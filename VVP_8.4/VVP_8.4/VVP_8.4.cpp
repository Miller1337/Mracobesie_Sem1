//Даны координаты точки, не лежащей на координатных осях OX и OY. Определить номер координатной четверти, в которой находится данная точка
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int X, Y;
	cout << "Введите координаты точки (X,Y):";
	cin >> X >> Y;
	if (X != 0 && Y != 0)
	{
		if (X > 0 && Y > 0)
		{
			cout << "Первая координатная четверть"<<endl;
		}
		if (X < 0 && Y>0)
		{
			cout << "Вторая координатная четверть" << endl;
		}
		if (X < 0 && Y < 0)
		{
			cout << "Третья координатная четверть" << endl;
		}
	}
	else

	{
		cout << "Четвёртая координатная четверть" << endl;
	}

	system("pause");
	return 0;
}

