#include <iostream>
using namespace std;
int main()
{
	int arr[20][20],N, M, f=1, i, j,d=1,a=1,c=0;
	cout << "Enter N:";
	cin >> N;
	cout << "Enter M:";
	cin >> M;
	for (i = 1; i <= M; i++)
	{
		cout << "i:";

		for (j = 1; j <= N; j++)
		{
			cout << "j:";
			cin >> arr[i][j];
		}
		
	}
	for ( i = 1; i <= M; i++)
	{
		f *= arr[i][1];
	}
	for (j = 2; j <= N; j++)
	{
		for ( i = 1; i <= M; i++)
		{
			d *= arr[i][j];
		}
		if (d<f)
		{
			f = d;
			c = j;
		}
	}
	cout << c << " " << f << endl;
	system("PAUSE");
	return 0;
}