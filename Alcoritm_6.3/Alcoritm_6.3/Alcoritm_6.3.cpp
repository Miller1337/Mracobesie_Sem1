#include<iostream>
#include<cmath>
#include<stdio.h>
#include<stdlib.h>
const int NotUsed = system("color F0");
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int i, j, n;
	cout << "Введите размер матрицы: ";
	cin >> n;
	int** M;
	M = new int* [n];
	for (i = 0; i < n; i++) M[i] = new int[n];
	for (i = 0; i < n; i++) {
		cout << "Введите элементы " << i + 1 << " строки: ";
		for (j = 0; j < n; j++) {
			cin >> M[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << M[i][j] << "\t";
		}
		cout << endl;
	}
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (M[j][j] > M[j + 1][j + 1]) {
				M[j + 1][j + 1] += M[j][j];
				M[j][j] = M[j + 1][j + 1] - M[j][j];
				M[j + 1][j + 1] -= M[j][j];
			}
		}
	}
	cout << endl << "Матрица после сортировки: " << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << M[i][j] << "\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
