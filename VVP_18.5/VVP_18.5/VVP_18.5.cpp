#include <iostream>
using namespace std;
int main()
{
	int arr[20][20], N, M, f , i, j, c = 0;
	cout << "Enter N:";
	cin >> N;
	cout << "Enter M:";
	cin >> M;
	for (i = 1; i <= M; i++)
	{
		cout << "i:";

		for (j = 1; j <= M; j++)
		{
			cout << "j:";
			cin >> arr[i][j];
		}

	}
	for (j = 1; j <= M; j++)
	{
		for (i = 1; i <= N; i++)
		{
			if (arr[i][j] % 2 != 0)
			{
				c++;
			}
		}
		if (c == N)
		{
			cout << "Colons: " << j << endl;
			break;
		}
	}
	if(c=0)
	{
		cout << "0";
	} 
system("PAUSE");
return 0;
}