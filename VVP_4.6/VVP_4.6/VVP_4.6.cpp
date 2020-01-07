//Найти решение системы линейных уравнений вида:A1·x + B1·y = C1,A2·x + B2·y = C2,



#include <iostream>
using namespace std;

int main()
{
	float A1 = 0, B1 = 0, C1 = 0, A2 = 0, B2 = 0, C2 = 0,x=0,y=0;
	cout << "Enter A1: ";
	cin >> A1;
	cout << "Enter B1: ";
	cin >> B1;
	cout << "Enter C1: ";
	cin >> C1;
	cout << "Enter A2: ";
	cin >> A2;
	cout << "Enter B2: ";
	cin >> B2;
	cout << "Enter C2: ";
	cin >> C2;
	x = (C2 - (B2 * C1)) / ((B1 * A2) - A1);
	y = (C1 - (A1 * x)) / B1;
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	system("pause");
	return 0;
}