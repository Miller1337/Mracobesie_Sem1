//С начала суток прошло N секунд (N — целое). Найти количество секунд, прошедших с начала последней минуты.

#include <iostream>
using namespace std;

int main()
{
	int A = 0;
	cout << "Enter seconds:";
	cin >> A;
	A = A % 60;
	cout <<"Seconds after last minute :"<< A<<endl;
	system("pause");
	return 0;
}

