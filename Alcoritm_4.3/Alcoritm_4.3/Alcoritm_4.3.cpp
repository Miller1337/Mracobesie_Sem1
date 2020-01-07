#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
const int NotUsed = system("color F0");

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите количество элементов массива: ";
	int N, i;
	cin >> N;
	int* M1 = new int[N];
	for (i = 0; i < N; i++)
	{
		cout << "Введите элементы массива: ";
		cin >> M1[i];
	}
	int b;
	cout << "Введите число b: ";
	cin >> b;
	int* M2 = new int[N];
	int K = 0;
	for (i = 0; i < N; i++)
	{
		if (M1[i] >= b)
		{
			M2[K] = M1[i];
			K++;
		}
	}
	cout << "Массив после преобразования: ";
	for (i = 0; i < K; i++) cout << M2[i] << " ";
	system("pause");
	return 0;
}
