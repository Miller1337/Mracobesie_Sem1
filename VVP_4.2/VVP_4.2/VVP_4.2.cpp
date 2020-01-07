

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	float a = 0, R = 0, p = 3.14;
	cout << "Введите R:";
	cin >> R;
	a = R * (180 / p);
	cout << "Угол а в градусах:" << a << endl;

	system("pause");
	return 0;
}

