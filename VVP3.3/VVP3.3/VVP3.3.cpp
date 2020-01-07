#include <iostream>
using namespace std;

int main()
{
	int A = 0, B = 0, C = 0, N = 0, F = 0, G = 0;

	cout << "Enter A:";
	cin >> A;
	cout << "Enter B:";
	cin >> B;
	cout << "Enter C:";
	cin >> C;
	cout << "A:" << A << endl;
	cout << "B:" << B << endl;
	cout << "C:" << C << endl;


	N = A;
	A = C;
	C = N;
	N = A;
	A = B;
	B = N;





	cout << "change A:" << A << endl;
	cout << "change B:" << B << endl;
	cout << "change C:" << C << endl;
	system("pause");
	return 0;
}
