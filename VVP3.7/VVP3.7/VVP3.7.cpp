// VVP3.7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int A = 0, B=0,C=0;
	cout << "enter A:";
	cin >> A;

	B = A * A;
	C = B * A;
	B = B * C;
	C = B * B;
	B = B * C;

	cout <<"Пятнадцатая степень А="<< B << endl;
	system("pause");
	return 0;
}
