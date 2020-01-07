//Даны три числа. Найти сумму двух наибольших из них

#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cout << "Enter numbers:";
	cin >> A >> B >> C;
	if (A > B)
	{
		if (C > B)
		{
				cout << A + C << endl;
		}
		else
		{
				cout << A + B << endl;
		}
	}
	else
	{
		if (C>A)
		{
			cout << B + C << endl;
		}
		else
		{
			cout << B + A << endl;
		}
	}
	system("pause");
	return 0;
}

