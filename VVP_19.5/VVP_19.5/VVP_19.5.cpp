// VVP_19.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
int main()
{
   int arr[10][10];
   int M, N, i, j, sum, b,d=0;
    cout << "Enter M: ";
    cin >> M;
    cout << "Enter N: ";
    cin >> N;
    for (int i = 0; i < M; i++)
    {
        cout << "Enter i : " << endl;
        for (int j = 0; j < N; j++)
        {
            cout << "Enter j : ";
            cin >> arr[i][j];
        }
    }
    cout << "////////////////////" << endl;
    cout << "Original matrix :" << endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
    cout << "////////////////////" << endl;
    for ( i = 0; i < M*2-1; i++)
    {
        sum = 0;
        b = i;
        if (i>=M)
        {
            b = M - 1; d++;
        }
        for  (j = b; j >d-1; j--)
        {
            sum += arr[b + d - j][j];
        }
        cout <<"Sum of diagonal elements: "<< sum << endl;
    }
    system("PAUSE");
    return 0;
}
