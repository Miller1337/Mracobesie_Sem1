 // VVP_16.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int N, k = 0, b=0;
	cout << " Enter N:";
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << " Enter arr[i]:";
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i] == arr[j])
			{
				k++;
			}
			if (k == 2)
			{
				k = i - 1;
				b = arr[i];
				for (int j = i; j < N; j++)
				{
					if (arr[j] != b)
					{
						k++;
						arr[k] = arr[j];
					}
				}
				N = k++;
				i--;
			}
		}
	}
	for (int i = 0; i <= N; i++)
	{
		cout << arr[i];
	}
	cout << endl;
	system("pause");
	return 0;
}

