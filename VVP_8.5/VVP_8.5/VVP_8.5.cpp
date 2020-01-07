//Дано целое число. Вывести его строку-описание вида «отрицательное четное число», «нулевое число», «положительное нечетное число» и т. д.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int A;
	cout << "Enter A:";
	cin >> A;
	
	
		if (A > 0 && A % 2 == 0)
		{
			cout << "Положительное чётное" << endl;
		}
		if (A > 0 && A % 2 != 0)
		{
			cout << "Положительное нечетное" << endl;
		}
		if (A < 0 && A % 2 == 0)
		{
			cout << "Отрицательное чётное" << endl;
		}
		if (A < 0 && A % 2 != 0)
		{
			cout << "Отрицательное нечётное" << endl;
		}
		if (A==0)
		{
			cout << "Нулевое" << endl;
		}
	system("pause");
		return 0;
}

