// VVP_14.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Enter arr[i]: ";
		cin >> arr[i];
	}
	int d = arr[1] - arr[0];
	for (int i = 2 ; i < N-1; i++)
	{

		if (d != arr[i+1] - arr[i])
		{
			cout << "0" << endl;
		}
		else
		{
			cout << d << endl;
		}

	}
	
	system("pause");
	return 0;
}

