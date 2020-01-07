// Дано трехзначное число. Проверить истинность высказывания: «Цифры данного числа образуют возрастающую или убывающую последовательность».

#include <iostream>
using namespace std;

int main()
{
	int A = 0, B=0,C=0,F=0;
	cout << "Enter A:";
	cin >> A;
	B = A % 100;
	C = A % 10 - B * 100;
	F = A - C * 10 - B * 100;
	if (0 == (((B < C) && (C < F)) || ((B > C) && (C > F))))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}

	system("pause");
	return 0;
}

