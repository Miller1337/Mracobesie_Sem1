

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");
	float a = 0, R = 0;
	float p = 3.14;

	cout << "Введите угол a в градусах:";
	cin >> a;
	R = a * (p / 180);
	cout <<"Угол а в радианах = "<< R<<endl;

	system("pause");
	return 0;
}

