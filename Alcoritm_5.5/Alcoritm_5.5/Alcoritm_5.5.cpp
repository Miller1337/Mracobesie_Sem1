#include<iostream>
#include<cmath>
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
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
	cout << endl;
	int P1 = 1, N1 = 0;
	int S2 = 0, N2 = 0;
	int P3 = 1, N3 = 0;
	int S4 = 0, N4 = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i > j) {
				P1 *= M[i][j];
				N1++;
				if (M[i][j] > 0) {
					P3 *= M[i][j];
					N3++;
				}
			}
			if (i < j) {
				S2 += M[i][j];
				N2++;
				if (M[i][j] < 0) {
					S4 += M[i][j];
					N4++;
				}
			}
		}
	}
	cout << "Произведение элементов под главной диагональю: " << P1 << ", их количество: " << N1 << endl;
	cout << "Сумма элементов над главной диагональю: " << S2 << ", их количество: " << N2 << endl;
	cout << "Произведение положительных элементов под главной диагональю: " << P3 << ", их количество: " << N3 << endl;
	cout << "Сумма отрицательных элементов над главной диагональю: " << S4 << ", их количество: " << N4 << endl;

	system("pause");
	return 0;
}
