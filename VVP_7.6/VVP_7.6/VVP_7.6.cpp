// Даны целые числа a, b, c, являющиеся сторонами некоторого треугольника. Проверить истинность высказывания: «Треугольник со сторонами a, b, c является прямоугольным».
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a = 0, b = 0, c = 0;
	cout << "Введите сторону а:";
	cin >> a;
	cout << "Введите сторону b:";
	cin >> b;
	cout << "Введите сторону c:";
	cin >> c;
	if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b))
	{
		cout << "Треугольник прямоугольный"<<endl;

	}
	else
	{
		cout << "Треугольник не прямоугольный" << endl;
	}
	system("pause");
	return 0;
}

