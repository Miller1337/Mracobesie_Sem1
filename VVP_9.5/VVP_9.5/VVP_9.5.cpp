// В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, обозначаемых названиями цвета: зеленый, красный, желтый, белый и черный. В каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи. По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы».

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int N;
	cout << "Введите год:";
	cin >> N;
	cout << "Год ";
	switch (N%10)
	{
	case 0:
		cout << "бел";
		break;
	case 1:
		cout << "бел";
		break;
	case 2:
		cout << "чёрн";
		break;
	case 3:
		cout << "черн";
		break;
	case 4:
		cout << "зелён";
		break;
	case 5:
		cout << "зелён";
		break;
	case 6:
		cout << "красн";
		break;
	case 7:
		cout << "красн";
		break;
	case 8:
		cout << "жёлт";
		break;
	case 9:
		cout << "жёлт";
		break;
	}
	switch (N%12)
	{
	case 0:
		cout << "ой ";
		break;
	case 1:
		cout << "ой ";
		break;
	case 2:
		cout << "ой ";
		break;
	case 3:
		cout << "ой ";
		break;
	case 4:
		cout << "ой ";
		break; 
	case 5:
			cout << "ой ";
			break;
	case 6:
		cout << "ого ";
		break;
	case 7:
		cout << "ого ";
		break;
	case 8:
		cout << "ого ";
		break;
	case 9:
		cout << "ой ";
		break;
	case 10:
		cout << "ой ";
		break;
	case 11:
		cout << "ой ";
		break;
	}
	switch ((N+8)%12)
	{
	case 0:
		cout << "крысы";
		break;
	case 1:
		cout << "коровы";
		break;
	case 2:
		cout << "тигра";
		break;
	case 3:
		cout << "зайца";
		break;
	case 4:
		cout << "дракона";
		break;
	case 5:
		cout << "змеи";
		break;
	case 6:
		cout << "лошади";
		break;
	case 7:
		cout << "овцы";
		break;
	case 8:
		cout << "обезьяны";
		break;
	case 9:
		cout << "курицы";
		break;
	case 10:
		cout << "собаки";
		break;
	case 11:
		cout << "свиньи";
		break;
	}
	cout << endl;
	system("pause");
	return 0;
}


