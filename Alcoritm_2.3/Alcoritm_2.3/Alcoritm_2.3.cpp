#include <iostream>

const int NotUsed = system("color F0");
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a;

	cout << "Введите возраст:";
	cin >> a;
	if ((a == 1) || (a == 21) || (a == 31) || (a == 41) || (a == 51) || (a == 61) || (a == 71) || (a == 81) || (a == 91)) {
		cout << "год\n";
	}
	if ((a >= 2 && a <= 4) || (a >= 22 && a <= 24) || (a >= 32 && a <= 34) || (a >= 42 && a <= 44) || (a >= 52 && a <= 54) || (a >= 62 && a <= 64) || (a >= 72 && a <= 74) || (a >= 82 && a <= 84) || (a >= 92 && a <= 94)) {
		cout << "года\n ";
	}
	if ((a >= 5 && a <= 20) || (a >= 25 && a <= 30) || (a >= 35 && a <= 40) || (a >= 45 && a <= 50) || (a >= 55 && a <= 60) || (a >= 65 && a <= 70) || (a >= 75 && a <= 80) || (a >= 85 && a <= 90) || (a >= 95 && a <= 100)) {
		cout << "лет\n";
	}
	system("pause");
	return 0;
}
