#include <iostream>
using namespace std;
int main()
{
	int arr[20][20], K, N, M, s=0, i, j,m=1;
	cout << "Enter M:";
	cin >> M;
	cout << "Enter K:";
	cin >> K;
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
	for (j = 0; j < N; j++)
	{
		s += arr[K-1][j];
		m *= arr[K-1][j];
	}
	cout <<endl<< "Sum: " << s << endl << "Mult: " << m << endl;
	system("pause");
	return 0;
}