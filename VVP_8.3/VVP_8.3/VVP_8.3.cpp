// На плоскости расположены три точки: A, B, C. Определить, какая из двух последних точек (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float A, B, C, D;
	cout << "Enter 3 point coordinats:";
	cin >> A >> B >> C;
	if (abs(B - A) < abs(C - A))
	{
		D = abs(B - A);
		cout << "B near point A" << endl;
	}
	else
	{
		D = abs(C - A);
		cout << "C near point A" << endl;
	}
	system("pause");
	return 0;
}

