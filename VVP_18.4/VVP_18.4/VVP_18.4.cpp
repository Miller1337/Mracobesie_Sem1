// VVP_18.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int arr[20][20], N, M, f , i, j, d, a , c=0 ;
	cout << "Enter N:";
	cin >> N;
	cout << "Enter M:";
	cin >> M;
	for (i = 0; i < M; i++)
	{
		cout << "i:";

		for (j = 0; j < M; j++)
		{
			cout << "j:";
			cin >> arr[i][j];
		}

	}
	for ( j = 0; j < N; j++)
	{
		a = 0;
		f = 0;
		for ( i = 0; i < N; i++)
		{
			a += arr[i][j];
			d = a / N;
		}
		for ( i = 0; i < N; i++)
		{
			if (arr[i][j] > d)
			{
				f++;
			}
		}
		cout << "Colons: "<< j <<" "<< " Elements: "<< f << endl;
	}
	system("PAUSE");
	return 0;
}

