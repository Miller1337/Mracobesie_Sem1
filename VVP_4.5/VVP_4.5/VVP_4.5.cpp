//Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B(коэффициент A не равен 0).

#include <iostream>
using namespace std;

int main()
{
	float A = 0, B = 0, x = 0;
	cout << "Enter A: ";
	cin >> A;
	cout << "Enter B: ";
	cin >> B;

	if (A > 0)
	{
		x = -B / A;
		cout << "x= " << x << endl;
	}
	
	else
	{
		cout << "EROR"<<endl;
	}
	system("pause");
	return 0;
}

