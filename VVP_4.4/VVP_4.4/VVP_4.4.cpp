

#include <iostream>
using namespace std;

int main()
{
	float V1 = 0, V2 = 0, S = 0,T=0;
	cout << "Enter V1:";
	cin >> V1;
	cout << "Enter V2:";
	cin >> V2;
	cout << "Enter S:";
	cin >> S;
	cout << "Enter T:";
	cin >> T;

	S = S + T * (V1 + V2);
	cout << "S=" << S << endl;

	system("pause");
	return 0;
}

