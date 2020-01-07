// VVP_17.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	double arr[15][2],p,max=0;
	int N,p1,p2,p3,j,f;
	cout << "N:";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "a" << i + 1 << ":" << endl;
		cout << "	x:";
		cin >> arr[i][0];
		cout << "	y:";
		cin >> arr[i][1];
	}
	for (int i = 0; i < N; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			for ( f = j+1; f < N; f++)
			{
				p = 0;
				p += sqrt(pow(arr[i][0] - arr[j][0], 2) + pow(arr[i][1] - arr[j][1], 2));
				p += sqrt(pow(arr[i][0] - arr[f][0], 2) + pow(arr[i][1] - arr[f][1], 2));
				p += sqrt(pow(arr[j][0] - arr[f][0], 2) + pow(arr[j][1] - arr[f][1], 2));
				if (p>max)
				{
					p1 = i;
					p2 = j;
					p3 = f;
					max = p;
				}
			}
		}
	}
	cout << "P: " << max << endl;
	cout << "point A: " << arr[p1][0]<<" " << arr[p1][1] << endl;
	cout << "point B: " << arr[p2][0] << " " << arr[p2][1] << endl;
	cout << "point C: " << arr[p3][0] << " " << arr[p3][1] << endl;
	system("pause");
	return 0;
}

