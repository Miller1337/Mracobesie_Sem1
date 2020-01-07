#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c, max, min;
	cout << "Введите три числа" << endl;
	cin >> a >> b >> c;
	if (a > b) {
		max = a;
		if (b > c) {
			min = c;
		}
		else {
			min = b;
		}
	}
	else {
		max = b;
		if (a < c) {
			min = a;
		}
		else {
			min = c;
		}
	}
	if (c > a&& c > b) {
		max = c;
	}
	cout << "Наибольшее: " << max << endl << "Наименьшее: " << min;
	system("pause");
	return 0;
}
