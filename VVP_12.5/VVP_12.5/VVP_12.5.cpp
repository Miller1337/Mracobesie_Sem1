// VVP_12.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
double Fact2(int N)
{
	double a = 1;
	for (int i = 2; i <= N; i += 2)
	{
		if (N % 2 == 0 && i % 2 == 0)
			a = a * i;
	}
	for (int i = 1; i <= N; i += 2)
	{
		if (N % 2 != 0 && i % 2 != 0)
			a = a * i;
	}
	return a;
}

	int main()
	{
		int N;
		cout << "Enter N: ";
		cin >> N;
		cout << Fact2(N) << endl;
		system("pause");
		return 0;
	}

