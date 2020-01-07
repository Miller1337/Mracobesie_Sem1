
#include <iostream>
const int NotUsed = system("color F0");
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	int N = 0;
	int f = 0;
	int g = 1;
	int i;

	int arr[5]{};


	for (i = 0; i < 5; i++) {
		cout << "Введите i:";
		cin >> arr[i];

		if (arr[i] % 2 != 0) {
			N += 1;
			f += arr[i];
			g *= arr[i];

		}
	}
	if (N != 0) {
		cout << "Колво нечетных чисел:" << N << " Сумма: " << f << " Произведение:" << g << endl;

	}
	else {
		cout << "Нечетных чисел нет." << endl;
	}
	system("pause");
	return 0;

}
