// VVP_11.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	
	int	A = 1, B = 1, C = 2, D = 1, F = 3, N,G=0;
	cin >> N;
	if (N == 1 || N == 2) 
	{
		cout << A << endl;
	}
	else if(N==3)
	{
		cout << A + B << endl;
	}
	else
	{
		while (N>F)
		{
			G = A * C + B * D;
			C = C + D;
			D = C - D;
			F = F + 1;
		}
		cout << G << endl;

	}
	system("pause");
	return 0;
}

