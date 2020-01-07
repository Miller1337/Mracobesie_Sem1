// VVP_16.cpp Дан массив размера N. После каждого отрицательного элемента массива вставить элемент с нулевым значением.
//

#include <iostream>

using namespace std;
int main()
{
	int N;
	cout << " Enter N:";
	cin >> N;
	int* arr = new int[N];
	
	for (int i = 0; i < N; i++)
	{
		cout << " Enter arr[i]:";
		cin >> arr[i];
	}
	for (int i = N-1; i >=0 ; i--)
	{
		if (arr[i] < 0)
		{
			N++;
			for (int j = N; j > i; j--)
			{
				arr[j] = arr[j - 1];
			}
			arr[i + 1] = 0;
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout  << arr[i]<<" ";
	}
	system("pause");
	return 0;
}