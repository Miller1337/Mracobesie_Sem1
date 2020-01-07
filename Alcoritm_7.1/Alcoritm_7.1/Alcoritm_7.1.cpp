#include <iostream>
#include <locale>
#include "cmath"
using namespace std;
const int NotUsed = system("color F0");
int lenstr(const char* s) {
	int i = 0;
	while (*s++)
		++i;
	return i;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	char string[100];

	cout << "Введите " << '\n';
	cin >> string;
	cout << lenstr(string);
	cout << endl;
	system("pause");
	return 0;
}
