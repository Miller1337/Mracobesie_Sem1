// Даны две переменные целого типа: A и B. Если их значения не равны, то присвоить каждой переменной большее из этих значений, а если равны, то присвоить переменным нулевые значения. Вывести новые значения переменных A и B.
#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cout << "A = ";
	cin >> A;
	cout << "B = ";
	cin >> B;

	if (A == B) {
		A = 0;
		B = 0;
	}
	if (A != B )
	{
		if (A > B) {
			B = A;
		}
		else if (B > A) {
			A = B;
		}
	}
	cout << "A = " << A << " B = " << B << endl;
	system("pause");
	return 0;
}
