// VVP_11.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
using namespace std;


int main()
{
	float P, S = 0;
	int K = 1000;
	cin >> P;
	for (int i = 1; K <= 1100; i++)
	{
		K = K + K*P/100;
		S++;
	}
	cout << K << endl;
	cout << S << endl;
	system("pause");
	return 0;
}
