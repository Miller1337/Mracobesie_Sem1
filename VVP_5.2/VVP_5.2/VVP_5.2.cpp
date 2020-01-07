// Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Найти количество отрезков B, размещенных на отрезке A.
//

#include <iostream>
using namespace std;

int divizion(int val, int divider)
{
	return val / divider;
};

int main()
{
	int A = 0, B = 0;
	cout << "Enter A :";
	cin >> A;
	cout << "Enter B :";
	cin >> B;
	if (A>B)
	{
		A = divizion(A , B);
		cout << "A=" << A << endl;
	}
	else
	{
		cout << "EROR";
	}
	system("pause");
		return 0;
}

