// VVP_13.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int N,i;
	cout << "Enter N:";
	cin >> N;
	int* arr = new int[N];
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	i = 1;
	while (i<=N)
	{
		cout  <<" "<< arr[i] ; 
		i += 2;
	}
	i = (N / 2) * 2;
	while (i>=1)
	{
		cout  << " " << arr[i];
		i -= 2;
	}
	cout << endl;
	system("pause");
	return 0;
}
