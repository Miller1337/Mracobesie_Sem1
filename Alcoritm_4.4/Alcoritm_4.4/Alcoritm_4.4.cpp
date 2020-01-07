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
    cout << "Введите количество элементов массива: ";
    int N, i;
    int min = INT_MAX;
    cin >> N;
    int* M = new int[N];
    for (i = 0; i < N; i++) {
        cout << "Введите элементы массива: ";
        cin >> M[i];
        if (M[i] < min) min = M[i];
    }
    for (i = 0; i < N; i++) {
        if (i % 2 != 0) M[i] = M[i] + min;
    }
    cout << "Массив после преобразования: ";
    for (i = 0; i < N; i++) cout << M[i] << " ";
    cout << endl;
    system("pause");
    return 0;
}
