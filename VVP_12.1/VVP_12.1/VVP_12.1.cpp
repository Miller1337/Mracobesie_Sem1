//Описать функцию PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B (A — входной, B — выходной параметр; оба параметра являются вещественными). С помощью этой функции найти третьи степени пяти данных чисел.

#include <iostream>
using namespace std;

void PowerA3(double A, double &B)
{
	B = A * A * A;
}

void main()
{
	double A, B=0;
	for (int i = 0; i <= 5; i++)
	{
		cout << "Enter A:";
		cin >> A;
		PowerA3(A, B);
		cout << "B =" << B << endl;
	}
	
	system("pause");
	return ;
}

