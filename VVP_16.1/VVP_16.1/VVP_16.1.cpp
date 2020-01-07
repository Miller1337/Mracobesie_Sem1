// VVP_16.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int N,k=0;
	cout << "Enter N:";
	cin >> N;
	int* arr = new int[N];
	int* b = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Enter arr[i]:";
		cin >> arr[i];
	}
	cout << endl;
	b[0] = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (arr[i]!=arr[i+1])
		{
			b[k] = arr[i];
			k++;
		}
	}
	for (int i = 0; i < k; i++)
	{
		cout << b[i] << " ";
	}
	system("pause");
	return 0;
}

/*for (int i = 0; i < N; i++)
	{
		if (arr[k] != arr[i])
		{
			k++;
			arr[k] = arr[i];
		}
	}
	for (int i = 0; i < k+1; i++)
	{
		cout << arr[i] << " ";
	}*/