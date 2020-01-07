// VVP_18.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int arr[20][20], M, f, i, j;
	cout << "Enter M:";
	cin >> M;
	for ( i = 0; i < M; i++)
	{
		cout << "i:";

		for ( j = 0; j < M; j++)
		{
			cout << "j:";
			cin >> arr[i][j];
			
		}
	}
	for ( f = 0; f < M/2; f++)
	{
		for (i = f; i < M - f; ++i) { cout << arr[f][i]; }
		for (j = f + 1; j <= M - f - 1; ++j) { cout << arr[j][M - f - 1]; }
		for (i = M - f - 2; i >= f; --i) { cout<<arr[M - f - 1][i]; }
		for (j = M - f - 2; j >= f + 1; --j) { cout << arr[j][f]; }
	}
	cout << arr[M / 2][M / 2] << endl;
	cout << endl;
	return 0;

}

