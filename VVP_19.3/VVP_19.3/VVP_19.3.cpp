// VVP_19.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void main()
{
    int arr[10][10];
    int N, M, j, i, b=0;
    cout << "Enter M:";
    cin >> M;
    cout << "Enter N:";
    cin >>N;
    for ( i = 1; i <= M; i++)
    {
        cout << "Enter i:";
        for (j = 1; j <= N; j++)
        {
            cout << "Enter j:";
            cin >> arr[i][j];
        }
    }
    for (i = 1; i <= M; i++)
    {
        for (j = 1; j <= N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "///////////" << endl;
    for (int i = 1; i <= M / 2; i++)
    {
        for (int j = 1; j <= N / 2; j++)
        {
            b = arr[i][j];
            arr[i][j] = arr[M / 2 + i][N / 2 + j];
            arr[M / 2 + i][N / 2 + j] = b;
        }
    }
    for (i = 1; i <= M; i++)
    {
        for (j = 1; j <= N; j++)
        {
           cout<< arr[i][j]<<" ";
        }
        cout << endl;
    }
    system("PAUSE");
    return ;
}
