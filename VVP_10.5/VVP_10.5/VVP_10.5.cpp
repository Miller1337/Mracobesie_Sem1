// Дано вещественное число A и целое число N (> 0). Используя один цикл, найти значение выражения 1 − A + A2 − A3 + . ..± AN .

#include <iostream>
using namespace std;
int main()
{
	float A;
	int N, B = 1, C = 1;
	cout << "Enter A , N :";
	cin >> A >> N;
	for (int i = 1; i < N; i++)
	{
		if (N % 2 == 0)
		{
			C = C * A;
			B = B + C;
		}
		else
		{
			C = C * A;
			B = B - C;
		}
		cout << B << endl;
	}
	system("pause");
	return 0;
}

