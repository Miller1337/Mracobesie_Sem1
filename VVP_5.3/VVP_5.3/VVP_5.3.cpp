// . Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Найти длину незанятой части отрезка A.

#include <iostream>
using namespace std;

int main()
{
	int A = 0, B = 0;
	cout << "Enter A:";
	cin >> A;
	cout << "Enter B:";
	cin >> B;
	if (A > B)
	{
		A = A % B;
		cout << "A=" << A << endl;
	}
	else
	{
		cout << "EROR"<<endl;
	}
	system("pause");
	return 0;
}

