#include <iostream>
#include <locale>

using namespace std;
const int NotUsed = system("color F0");
int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b, c;
	a = 0;
	cout << "Введите b:";
	cin >> b;
	for (c = 100; c <= b; c++) {
		a = a + (c * c);
	}
	cout << "Среднее арифметическое чисел в квадрате = " << a / (b - 99) << endl;
	system("pause");
	return 0;
}
