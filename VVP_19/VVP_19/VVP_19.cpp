//19.2 Дана матрица размера M × N. Поменять местами столбцы, содержащие минимальный и максимальный элементы матрицы.
#include <iostream>
using namespace std;
int main()
{
    int arr[20][20], N, M, min, max, i, j,b,c,d=0,f=0,g=0;
    cout << "Enter M:";
    cin >> M;
    cout << "Enter N:";
    cin >> N;
    for (i = 0; i < M; i++)
    {
        cout << "Enter i:";
        for (j = 0; j < N; j++)
        {
            cout << "Enter j:";
            cin >> arr[i][j];
        }
    }
    /* for (i = 0; i < M; i++)
     {
         for (j = 0; j < N; j++)
            cout<< arr[i][j]<<" ";
         cout << endl;
         `````````````
     }*/
    b = arr[1][1];
    c = arr[1][1];
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (arr[i][j] >b)
            {
                b = arr[i][j];
                d = j;
            }
            if (arr[i][j] < c)
            {
                c = arr[i][j];
                f = j;
            }
        }
    }
    for (i = 0; i < N; i++)
    {
        g = arr[i][d];
        arr[i][d] = arr[i][f];
        arr[i][f] = g;
    }
    cout << "Max:   " << b << " Colons: " << d << endl;
  cout<<"Min:   "<< c<<" Colons:    "<< f << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
           cout<< arr[i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}