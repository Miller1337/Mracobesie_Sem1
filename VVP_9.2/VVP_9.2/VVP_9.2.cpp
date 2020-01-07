//Робот может перемещаться в четырех направлениях («С» — север, «З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо. Дан символ C — исходное направление робота и целое число N — посланная ему команда. Вывести направление робота после выполнения полученной команды
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	char N;
	int F;
	cout << "Начальное направление робота Север";
	cin >> N;
	cout << "Введите команду :";
	cin >> F;
	cout << "Направление -";
	switch (F)
	{
	case -1: switch (N) {
	case 'N':cout << "W"; break;
	case 'S':cout << "E"; break;
	case 'W':cout << "S"; break;
	case 'E':cout << "N"; break;
	}break;
	case 1: switch (N)
	{
	case 'N':cout << "E"; break;
	case 'S':cout << "W"; break;
	case 'W':cout << "N"; break;
	case 'E':cout << "S"; break;
	}break;
	case 0: switch (N)
	{
	case 'N':cout << "N"; break;
	case 'S':cout << "S"; break;
	case 'W':cout << "W"; break;
	case 'E':cout << "E"; break;
	}break;
	}
	cout << endl;
	system("pause");
	return 0;
}
