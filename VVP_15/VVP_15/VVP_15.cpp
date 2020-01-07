// VVP_15.4 Дан массив размера N. Обнулить элементы массива, расположенные между его минимальным и максимальным элементами (не включая минимальный и максимальный элементы).

#include <iostream>
using namespace std;
int main()
{
	int min = 1;
	int max = 1;
	int N;
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
		if (arr[i] <= arr[min])
		{
			min = i;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (arr[i] >= arr[max])
		{
			max = i;
		}
	}
	if (min > max)
	{
		for (int i = max+1 ; i < min  ; i++)
		{
			arr[i] = 0;
		}
	}
	if (min < max)
	{
		for (int i = min+1 ; i < max  ; i++)
		{
			arr[i] = 0;
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}
