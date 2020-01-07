// VVP_10.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	float A=1,B=1,C=1;
	int N;
	cout << "Enter A,N:";
	cin >> A >> N;
	for (int i = 1; i <= N; i++)
	{
		C = C * A;
		B = B + C;
		cout << B << endl;
	}
	system("pause");
	return 0;
}


