//Дано целое число, лежащее в диапазоне 1–999. Вывести его строкуописание вида «четное двузначное число», «нечетное трехзначное число» и т. д.
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int A=1-999;
	cout << "Enter A: ";
		cin >> A;
		if (A%2==0)
		{
			cout << "Чётное ";
		}
		else
		{
			cout << "Нечётное ";
		}

		if (A - 100 >= 0)
		{
			cout << "трехзначное" << endl;
		}
		else if (A - 10 >= 0)
		{
			cout << "двухзначное" << endl;
		}
		else
		{
			cout << "Цифра" << endl;
		}
		system("pause");
		return 0;
}

