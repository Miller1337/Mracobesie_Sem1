//Дано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии. Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии: A, A·D, A·D2 , A·D3 , . . .

#include <iostream>
using namespace std;
int main()
{
	int N,A,D;
	int arr[5];
	cout << "Enter N:";
	cin >> N;
	cout << "Enter A,D:";
	cin >> A >> D;
	arr[1] = A;
	for (int i=2;i<N;i++)
	{
		arr[i] = arr[i - 1] * D;
		cout << arr[i] << " " << endl;
	}
	system("pause");
	return 0;
}

