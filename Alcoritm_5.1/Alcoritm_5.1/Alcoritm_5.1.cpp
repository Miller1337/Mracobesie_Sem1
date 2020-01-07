#include<iostream>
#include<cmath>
#include<stdio.h>
#include<stdlib.h>

const int NotUsed = system("color F0");
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
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
    int min, max; min = INT_MAX; max = INT_MIN;
    int mini[2], maxi[2];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (M[i][j] > max) {
                max = M[i][j];
                maxi[0] = i;
                maxi[1] = j;
            }
            else if (M[i][j] < min) {
                min = M[i][j];
                mini[0] = i;
                mini[1] = j;
            }
        }
    }
    cout << "Максимальный элемент " << max << " на позиции (" << maxi[0] + 1 << ";" << maxi[1] + 1 << ")" << endl;
    cout << "Минимальный элемент " << min << " на позиции (" << mini[0] + 1 << ";" << mini[1] + 1 << ")" << endl;

    system("pause");
    return 0;
}
