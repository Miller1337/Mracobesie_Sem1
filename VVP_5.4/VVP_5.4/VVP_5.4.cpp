// Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа.

#include <iostream>
using namespace std;

int main()
{
	int A = 0;
	cout << "Enter A:";
	cin >> A;
	A = A / 10 + (A % 10) * 10;
	cout << "A=" << A << endl;
	system("pause");
	return 0;
}

