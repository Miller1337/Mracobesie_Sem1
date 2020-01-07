//. Дано четырехзначное число. Проверить истинность высказывания: «Данное число читается одинаково слева направо и справа налево».

#include <iostream>
using namespace std;

int main()
{
	int A = 0, B = 0, C = 0, D = 0, E = 0;
		cout << "Enter A:";
	cin >> A;
	B = (A / 1000) % 10;
	C = (A/ 100) % 10;
	D = (A/ 10) % 10;
	E = A % 10;
	if ((B == E) && (C == D))
	 {
		 cout << "True" << endl;
	 }
	 if ((B != E) || (C != D))
	 {
		 cout << "False" << endl;
	 }
	 system("pause");
	return 0;
}

