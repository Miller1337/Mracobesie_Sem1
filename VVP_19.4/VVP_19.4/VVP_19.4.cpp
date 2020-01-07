// VVP_19.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    int arr[10][10];
    int M, N, i, j, c,b;
    float ave=0;
    cout << "Enter M: ";
    cin >> M;
    cout << "Enter N: ";
    cin >> N;
    for  (int i = 1; i <= M; i++)
    {
         cout <<"Enter i : " << endl;
            for (int j = 1; j <= N; j++)
            {
                cout <<  "Enter j : ";
                cin >> arr[i][j];
            }
    }
    c = M;
    for ( i = 1; i <= M; i++)
    {
        b = 1;
        --c;
        while (b<=c)
        {
            if (arr[b][1]>arr[b+1][1])
            {
                for (j = 1; j <= N; j++)
                {
                    arr[b][j] += arr[b + 1][j];
                    arr[b + 1][j] = arr[b][j] - arr[b + 1][j];
                    arr[b][j] = arr[b][j] - arr[b + 1][j];
                }
                ++b;
            }
        }
    }
    for ( i = 1; i <=M; i++)
    {
        for ( j = 1; j <= N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    system("PAUSE");
    return 0;
}

