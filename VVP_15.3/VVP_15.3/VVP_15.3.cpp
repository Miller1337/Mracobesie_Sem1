// VVP_15.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int N,b=0;
	cout << "Enter N:";
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Enter arr:";
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++)
	{
		if ((arr[i] % 2) != 0)
		{
			b = arr[i];
		}
	}
	for (int j = 0 ; j < N; j++)
	{
		if ((arr[j] % 2) != 0)
		{
			arr[j] = arr[j] + b; 
			cout << arr[j] << endl;
		}
	}
	system("pause");
	return 0;
}

