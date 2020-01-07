// VVP_14.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int main()
{
	int N,i=0;
	cout << "enter N:";
	cin >> N;
	int* A = new int[N];
	for (int i = 1; i <= N; i++)
	{
		cout << "Enter A:";
		cin >> A[i];
	}
	for (int i = N - 1; i >= 2; i--)
	{
		if ((A[i] > A[i - 1]) && (A[i] > A[i + 1]))
		{
			cout << i << " ";
		}
		}
	
	system("pause");
	return 0;
}

