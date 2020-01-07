#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double arr[10][2];
	int N, i, j, a, b, c, f, p, g = 0;
	cout << "Enter N:";
	cin >> N;
	for ( i = 0; i < N; i++)
	{
		cout << "Enter A[" << i <<"]" ;
		cout << "x:";
		cin >> arr[i][0];
		cout << "y:";
		cin >> arr[i][1];
	}
	for (i = 0; i < N; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			for (f = j + 1; f < N; f++)
			{
				p = 0;
				p += sqrt(pow(arr[i][0] - arr[j][0], 2) + pow(arr[i][1] - arr[j][1], 2));
				p += sqrt(pow(arr[i][0] - arr[f][0], 2) + pow(arr[i][1] - arr[f][1], 2));
				p += sqrt(pow(arr[j][0] - arr[f][0], 2) + pow(arr[j][1] - arr[f][1], 2));
				if (p > g)
				{
					a = i;
					b = j;
					c = f;
					g = p;
				}

			}
		}
	}
	if (g = p) {

		cout << "P : " << g << endl;
		cout << "A :" << a + 1 << endl << " x: " << arr[a][0] << endl << " y: " << arr[a][1] << endl;
		cout << "A :" << b + 1 << endl << " x: " << arr[b][0] << endl << " y: " << arr[b][1] << endl;
		cout << "A :" << c + 1 << endl << " x: " << arr[c][0] << endl << " y: " << arr[c][1] << endl;
	}
	else
	{
		cout << "0"<<endl;
	}
	system("PAUSE");
	return 0;
}