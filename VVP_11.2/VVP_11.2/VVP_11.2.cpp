
#include <iostream>
using namespace std;


int main()
{
	float A, B;
	cout << "Enter A , B :";
	cin >> A >> B;
	if (A > B)
	{
		while (A > B)
		{
			A = A - B;
		}
		cout << A << endl;
	}
	else
	{
		cout << "EROR";
	}
	system("pause");
	return 0;
}