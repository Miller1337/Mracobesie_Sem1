#include<iostream>
#include<cmath>
#include<stdio.h>
#include<stdlib.h>
const int NotUsed = system("color F0");
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int i, j, N, M;
	cout << "Введите N: ";
	cin >> N;
	cout << "Введите M: ";
	cin >> M;
	int** MAT;
	MAT = new int* [N];
	for (i = 0; i < N; i++) MAT[i] = new int[M];
	for (i = 0; i < N; i++) {
		cout << "Введите элементы " << i + 1 << " строки: ";
		for (j = 0; j < M; j++) {
			cin >> MAT[i][j];
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			cout << MAT[i][j] << "\t";
		}
		cout << endl;
	} cout << endl;
	cout << "Сумма и произведение элементов строк матрицы: " << endl;
	int S = 0, P = 1;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			S += MAT[i][j]; P *= MAT[i][j];
		}
		cout << S << "\t" << P << endl;
		S = 0;
		P = 1;
	}

	system("pause");
	return 0;
}
