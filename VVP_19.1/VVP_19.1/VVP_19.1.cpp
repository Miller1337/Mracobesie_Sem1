// VVP_19.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
int main()
{
	int arr[20][20], N, M, max, i, j, min;
	cout << "Enter N:";
	cin >> N;
	cout << "Enter M:";
	cin >> M;
	for (i = 0; i < M; i++)
	{
		cout << "i:";

		for (j = 0; j <N; j++)
		{
			cout << "j:";
			cin >> arr[i][j];
		}

	}
	for ( i = 0; i < M; i++)
	{
		max = 0;
		min = 0;
		for (j = 1; j < N; j++)
		{
			if (arr[i][j] > arr[i][max])
			{
				max = j;
			}
			if (arr[i][j]  < arr[i][min])
			{
				min = j;
			}
		}
		if (max != min)
		{
			arr[i][max] = arr[i][max] ^ arr[i][min];// ^-внутренний указатель
			arr[i][min] = arr[i][max] ^ arr[i][min];// max и min заменяются через указатели друг дргуа
			arr[i][max] = arr[i][max] ^ arr[i][min];
		}
	}
	for (i = 0; i < M; i++)
	{
		for (j = 0; j <N; j++)
		{
			
			cout<< arr[i][j]<<" ";
		}
	}
	system("PAUSE");
	return 0;
}