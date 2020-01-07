
#include <iostream>
using namespace std;


int main()
{
	int A, B;
	cout << "Enter A , B :";
	cin >> A >> B;
	if (A < B)
	{
		for (int i = A; i < B + 1; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << i << endl;
			}
		}
	}
	else
	{
		cout << "EROR";
	}
	system("pause");
	return 0;
}