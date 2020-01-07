// Дан массив размера N. Вставить элемент с нулевым значением перед минимальным и после максимального элемента массива.

#include <iostream>
using namespace std;
int main()
{
	int i, c,f, min, max, a = 0, b = 0, N, j = 0;
	cout << "Enter N: ";
	cin >> N;
	float* arr = new float[N];
	float* mass = new float[N + 2];
	for (i = 0; i < N; i++)
	{
		cout << "Enter arr[i]: ";
		cin >> arr[i];
	}
	min = arr[0];
	max = arr[0];
	for (i = 0; i < N; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			a = i;
		}
		if (arr[i] > max)
		{
			max = arr[i];
			b = i;
		}
	}
	for (i = 0; i < N + 2; i++)
	{
		f = 0;
		for (c = 0; c < N + 2; c++)
		{

		}

		if (j == a && j == 0) 
		{
			mass[j] = 0;
			i++;
		}
		else if (j == a)
		{
			mass[i] = 0;
			i++;
		}
		if (j == b)
		{
			mass[i + 1] = 0;

			f = 1;
		}
		if (i < N + 2 && i >= 0)
		{
			mass[i] = arr[j];
		}
		if (f == 1)
		{
			i++;
		}
		if (j < N)
		{
			j++;
		}

	}
	for (i = 0; i < N + 2; i++)
	{
		cout << mass[i] << " ";
	}
	system("pause");
	return 0;
}
