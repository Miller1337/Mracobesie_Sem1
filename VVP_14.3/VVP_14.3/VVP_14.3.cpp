// VVP_14.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int N,a=0,b,i;
	cout << "enter N:";
	cin >> N;
	int* A = new int [N];
	for (int i = 1; i <= N; i++)
	{
		cout << "Enter A:";
		cin >> A[i];
	}
	
	a = A[2];
		for ( i = 4; i < N; i++)
		{
			if ((i % 2 == 0) && (a > A[i]))
			{
				a = A[i];
			}
		}
		
		
	
	cout << a <<  endl;
	system("pause");
	return 0;
}
