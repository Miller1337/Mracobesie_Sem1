// Дано целое число N (> 0). Найти квадрат данного числа, используя для его вычисления следующую формулу: N2 = 1 + 3 + 5 + . . . + (2·N − 1). После добавления к сумме каждого слагаемого выводить текущее значение суммы
#include <iostream>
using namespace std;

int main()
{
	int i, A, B;
	cin >> A;
	B = 0;
	for (i = 1; i <= A; i++)
	{
		B = B + 2 * i - 1;
		cout << B<<endl;
	}
	cout << endl;
	system("pause");
	return 0;
}

