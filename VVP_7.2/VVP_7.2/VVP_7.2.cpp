//Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C».

#include <iostream>
using namespace std;

int main()
{
	int A = 0, B = 0, C = 0;
	cout << "Enter A:";
	cin >> A;
	cout << "Enter B:";
	cin >> B;
	cout << "Enter C:";
	cin >> C;
	if (A < B && B< C)
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

