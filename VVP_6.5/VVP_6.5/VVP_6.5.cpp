// Дан номер некоторого года (целое положительное число). Определить соответствующий ему номер столетия, учитывая, что, к примеру, началом 20 столетия был 1901 год

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int A = 0, B = 0, C = 0;
	cout << "Введитие год :";
	cin >> A;
	B = (A / 100) + 1;
	cout << B<<" столетие"<<endl;
	system("pause");
	return 0;
}

