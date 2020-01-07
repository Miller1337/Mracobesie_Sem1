

#include <iostream>
using namespace std;

int main()
{
	float X = 0, A = 0, Y = 0;
	cout << "Enter X kg:";
	cin >> X;
	cout << "Enter A rub:";
	cin >> A;
	cout << "Enter Y kg:";
	cin >> Y;


	A = A / X;
	A = A * Y;

	cout << "1 kg candies :" << A<<" rub" << endl;
	system("pause");
	return 0;


}

