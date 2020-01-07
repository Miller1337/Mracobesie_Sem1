// Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа, например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать».

#include <iostream>
using namespace std;

int main()
{ 
	setlocale(LC_ALL, "ru");
	int N;
	cout << "Введите число:";
	cin >> N;
	switch (N/100)
	{
	case 1:
		cout << "Cто ";
		break;
	case 2:
		cout << "Двести ";
		break;
	case 3:
		cout << "Триста ";
		break;
	case 4:
		cout << "Четыреста ";
		break;
	case 5:
		cout << "Пятьсот ";
		break;
	case 6:
		cout << "Шестьсот ";
		break;
	case 7:
		cout << "Семьсот ";
		break;
	case 8:
		cout << "Восемьсот ";
		break;
	case 9:
		cout << "Девятьсот ";
		break;
	}
	if (((N % 100) / 10) == 1)
	{
		switch (N%100)
		{
			case 10:
				cout <<"десять ";
				break;
			case 11:
				cout << "одинадцать ";
				break;
			case 12:
				cout << "двенадцать ";
				break;
			case 13:
				cout << "тринадцать ";
				break;
			case 14:
				cout << "четырнадцать ";
				break;
			case 15:
				cout << "пятнадцать ";
				break;
			case 16:
				cout << "шестнадцать ";
				break;
			case 17:
				cout << "семнадцать ";
				break;
			case 18:
				cout << "восемнадцать ";
				break;
			case 19:
				cout << "девятнадцать ";
				break;

		}
	}
	else
	{
		switch (((N % 100) / 10))
		{
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "сорок ";
			break;
		case 5:
			cout << "пятьдесят ";
			break;
		case 6:
			cout << "шестьдесят ";
			break;
		case 7:
			cout << "семьдесят ";
			break;
		case 8:
			cout << "восемьдесят ";
			break;
		case 9:
			cout << "девяносто ";
			break;
		}
		switch ( N % 10 )
		{
		case 1:
		cout<<"один";
		break;
		case 2:
			cout<<"два";
			break;
		case 3:
			cout<<"три";
			break;
		case 4:
			cout<<"четыре";
			break;
		case 5:
			cout<<"пять";
			break;
		case 6:
			cout<<"шесть";
			break;
		case 7:
			cout<<"семь";
			break;
		case 8:
			cout<<"восемь";
			break;
		case 9:
			cout<<"девять";
			break;
		}
	}
	cout << endl;
	system("pause");
	return 0;

}

