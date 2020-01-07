// Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме. Вывести строку-описание указанного количества заданий, обеспечив правильное согласование числа со словами «учебное задание», например: 18 — «восемнадцать учебных заданий».

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int N;
	cout<<"Введите количество заданий:" ;
	cin>>N;
	if (N / 10 == 1)
	{
		switch (N)
		{
		case 10:
			cout<<"Десять учебных заданий" << endl;
			break;
		case 11:
			cout << "Одинадцать учебных заданий" << endl;
			break;
		case 12:
			cout << "Двенадцать учебных заданий" << endl;
			break;
		case 13:
			cout << "Тринадцать учебных заданий" << endl;
			break;
		case 14:
			cout << "Четырнадцать учебных заданий" << endl;
			break;
		case 15:
			cout << "Пятнадцать учебных заданий" << endl;
			break;
		case 16:
			cout << "Шестнадцать учебных заданий" << endl;
			break;
		case 17:
			cout << "Семнадцать учебных заданий" << endl;
			break;
		case 18:
			cout << "Восемнадцать учебных заданий" << endl;
			break;
		case 19:
			cout << "Девятнадцать учебных заданий" << endl;
			break;
		}
	}
	else
	{
		switch (N / 10)
		{
		case 2:
			cout << "Двадцать";
			break;
		case 3:
			cout << "Тридцать";
			break;
		case 4:
			cout << "Сорок";
		}
		switch (N%10)
		{
			
			case 1:
				cout << " одно";
				break;
			case 2:
				cout<<" двa";
				break;
			case 3:
				cout << " три";
				break;
			case 4:
				cout <<" четыре";
				break;
			case 5:
				cout << " пять";
				break;
			case 6:
				cout << " шесть";
				break;
			case 7:
				cout << " семь";
				break;
			case 8:
				cout << " восемь";
				break;
			case 9:
				cout << " девять";
				break;
		}
		switch (N%10)
		{
		case 0: 
			cout << " учебных заданий"<<endl;
			break;
		case  5:
			cout << " учебных заданий" << endl;
			break;
		case  6:
			cout << " учебных заданий" << endl;
			break;
		case 7:
			cout << " учебных заданий" << endl;
			break;
		case 8 :
			cout << " учебных заданий" << endl;
			break;
		case  9:
			cout << " учебных заданий" << endl;
			break;
		case 1:
			cout << " учебное задание" << endl;
			break;
		case 2:
			cout <<" учебных задания" << endl;
			break;
		case  3:
			cout << " учебных задания" << endl;
			break;
		case  4:
			cout << " учебных задания" << endl;
			break;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}

