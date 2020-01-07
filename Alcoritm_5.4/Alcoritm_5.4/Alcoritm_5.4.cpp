#include<iostream>
#include<cmath>
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
const int NotUsed = system("color F0");
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int i, j, N, M, s = 0, p = 0;
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
	}
	cout << endl;
	for (j = 0; j < M; j++) {
		for (i = 0; i < N; i++) {
			if (MAT[i][j] > 0) {
				s += MAT[i][j];
			}
		}
		cout << s << "\t"; s = 0;
	}
	cout << endl;
	for (j = 0; j < M; j++) {
		for (i = 0; i < N; i++) {
			if (MAT[i][j] > 0) {
				p++;
			}
		}
		cout << p << "\t";
		p = 0;
	}
	cout << endl;
	system("pause");
	return 0;
}
