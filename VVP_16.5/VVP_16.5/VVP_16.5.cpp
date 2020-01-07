// VVP_16.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int N,i,j;
	cout << " Enter N:";
	cin >> N;
	int *arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << " Enter arr:";
		cin >> arr[i];
	}
	for ( i = N-1; i >= 0; i--)
	{
		if (arr[i] > 0)
		{
			N++;
			for (j = N - 1; j > i; j--)
			{
				arr[j] = arr[j - 1];
			}
			arr[i] = 0;
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << arr[i]<<" ";

	}
	cout << endl;
	system("pause");
	return 0;
}