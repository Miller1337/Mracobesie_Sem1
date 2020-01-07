#include<iostream>
#include<cmath>
#include<stdio.h>
#include<stdlib.h>
const int NotUsed = system("color F0");
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int N, i, j, min;
	cout << "Введите количество элементов массива: ";
	cin >> N; int* M1 = new int[N];
	cout << "Введите элементы массива: ";
	for (i = 0; i < N; i++) {
		cin >> M1[i];
	}
	for (i = 0; i < N; i++) {
		min = M1[i];
		for (j = i; j < N; j++) {
			if (M1[j] <= min) {
				min = M1[j];
				M1[j] = M1[i];
				M1[i] = min;
			}
		}
	}
	cout << endl << "Массив после сортировки: ";
	for (i = 0; i < N; i++) {
		cout << M1[i] << " ";
	} cout << endl;

	system("pause");
	return 0;
}
