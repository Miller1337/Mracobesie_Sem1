// VVP_14.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int N;
	cout << "Enter N:";
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "arr:";
		cin >> arr[i];

	}
	for(int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (arr[i] == arr[j])
			{
				cout << j << ' ' << i << endl;
			}
		}
	}
	system("pause");
	return 0;
}
	

