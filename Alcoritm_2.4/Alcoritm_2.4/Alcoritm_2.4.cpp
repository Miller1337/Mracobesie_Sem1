#include <iostream>
#include <cmath>
using namespace std;

int main()

{
	setlocale(LC_ALL, "Russian");
	double a;
	double b;
	double c;
	double x;
	double D;
	D = 0;

	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << "Введите значение c: ";
	cin >> c;

	if (a == 0 && b != 0) {
		x = (-c / b);
		cout << "x равен" << x << endl;
	}
	if (a == 0 && b == 0 && c != 0) {
		cout << "Нет решений" << endl;

	}
	if (a == 0 && b == 0 && c == 0) {
		cout << "Множество решений" << endl;

	}
	if (a != 0) {
		D = (b * b - 4 * a * c);
		if (D >= 0) {//Если дискриминант больше или равен 0
			x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
			cout << "Первый корень равен " << x << endl;
			x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
			cout << "Второй корень равен " << x << endl;
		}
		else {
			cout << "Дискриминант меньше 0, нет решений.\n";
		}


	}
	system("pause");
	return 0;
}
