#include<iostream>
using namespace std;

int main()
{
	int  K = 0;
	cout << "1st January - Monday";
		cout << "Enter K: ";
		cin >> K;

		if (K > 365 || K < 1)
		{
			cout << "EROR";
		}
		K = K % 7;
		cout << K << endl;
		system("pause");
		return 0;
}