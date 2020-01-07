#include <stdlib.h>
#include <iostream>
const int NotUsed = system("color F0");
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int arr[5];
	int Min = 0, Max = 0;
	for (int i = 0; i < 5; i++) {
		cout << "Введите i: ";
		cin >> arr[i];

		if (arr[i] < arr[Min])
			Min = i;

		if (arr[i] > arr[Max])
			Max = i;
	}

	int N = arr[Min];
	arr[Min] = arr[Max];
	arr[Max] = N;


	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
