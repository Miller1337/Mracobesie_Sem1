//Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий N первых положительных нечетных чисел: 1, 3, 5, . . . .

#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "Enter N:";
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = (i * 2) + 1;
		cout << arr[i] << " " << endl;
	}
	system("pause");
	return 0;
}
