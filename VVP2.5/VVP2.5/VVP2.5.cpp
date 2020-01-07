

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    double x1,x2,x3,y1,y2,y3;
	int a, b, c, S, P;
	cout << "Enter x1: ";
	cin >> x1;
	cout << "Enter x2: " ;
	cin >> x2;
	cout << "Enter x3: " ;
	cin >> x3;
	cout << "Enter y1: " ;
	cin >> y1;
	cout << "Enter y2: " ;
	cin >> y2;
	cout << "Enter y3: " ;
	cin >> y3;
	
     a = sqrt(sqrt(x1 - x2) + sqrt(y1 - y2));
	 b = sqrt(sqrt(x2 - x3) + sqrt(y2 - y3));
	 c = sqrt(sqrt(x3 - x1) + sqrt(y3 - y1));

	 P = (a + b + c) / 2;
	 S = sqrt(P * ((P - a) * (P - b) * (P - c)));
	 cout << P << endl;
	 cout << S << endl;
	system("pause");
	return 0;
}

