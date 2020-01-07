//Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы неравенства A > 2 и B ≤ 3»

#include <iostream>
using namespace std;

int main()
{
	int A = 0, B = 0;
	cout << "Enter A:";
	cin >> A;
	cout << "Enter B:";
	cin >> B;
	if (A > 2 && B <= 3)
	{
		cout << "True"<<endl;
	}
	else
	{
		cout << "False"<<endl;
	}
	system("pause");
	return 0;
}

