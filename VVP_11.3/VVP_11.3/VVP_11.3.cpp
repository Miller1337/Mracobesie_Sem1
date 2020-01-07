
#include <iostream>
using namespace std;


int main()
{
	int N, K = 0;
	cout << "Enter N :";
	cin >> N;
	while (K <= N)
	{
		K += K + 1;
		cout << K << endl;

	}
	cout << endl;

	cout << K << endl;

	system("pause");
	return 0;
}