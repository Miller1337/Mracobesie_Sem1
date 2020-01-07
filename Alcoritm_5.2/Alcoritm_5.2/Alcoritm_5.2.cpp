#include<iostream>
#include<cmath>
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
const int NotUsed = system("color F0");
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int i, j, n;
	cout << "Введите размер матрицы: ";
	cin >> n;
	int** M;
	M = new int* [n];
	for (i = 0; i < n; i++)
		M[i] = new int[n];
	for (i = 0; i < n; i++) {
		cout << "Введите элементы " << i + 1 << " строки: ";
		for (j = 0; j < n; j++) {
			cin >> M[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
		{
			cout << M[i][j] << "\t";
		} cout << endl;
	}
	cout << endl << endl;
	int max;
	max = INT_MIN;
	int maxj = -1;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (M[i][j] > max) {
				max = M[i][j]; maxj = j;
			}
		}
		if (maxj != i) {
			M[i][i] += M[i][maxj];
			M[i][maxj] = M[i][i] - M[i][maxj];
			M[i][i] -= M[i][maxj];
		} maxj = -1;
		max = INT_MIN;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << M[i][j] << "\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
