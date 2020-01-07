

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x = 0, y = 0;
	cout << "Enter x: ";
	cin >> x;
	y = 3 * (pow(x, 6)) - 6 * (pow(x, 2)) - 7;
	cout << "y=" << y<<endl;
	system("pause");
	return 0;
}
