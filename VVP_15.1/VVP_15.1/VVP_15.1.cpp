// VVP_15.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int N;
	cout << "N:";
	cin >> N;
	int* A = new int[N];
	int* B = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "A:";
		cin >> A[i];
	}
	for (int i = 0; i < N; i++)
	{
		cout << "B:";
		cin >> B[i];
	}
	for (int i = 0; i < N; i++)
	{
		A[i] = A[i] + B[i];
		B[i] = A[i] - B[i];
		A[i] = A[i] - B[i];
	}
	for (int i = 0; i < N; i++)
	{
		cout <<"Change A:"<< A[i];
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "Change B:" << B[i];
	}
	cout << endl;
	system("pause");
	return 0;
}

