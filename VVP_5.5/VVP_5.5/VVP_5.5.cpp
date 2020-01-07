//Дано трехзначное число. В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int A = 0, B=0;
	cout << "Введите изначальное трёхзначное число :";
	cin >> A;
	B = A / 100;
	B = (A % 100) * 10 + B;
	cout<<"Число после перестановки : " << B<<endl;
	system("pause");
	return 0;
}

