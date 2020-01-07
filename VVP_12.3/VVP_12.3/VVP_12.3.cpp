// VVP_12.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
double RingS(double R1, double R2)
{
	const double Pi = 3.14;
	return (Pi * (pow(R1, 2) - pow(R2, 2)));
}
using namespace std;
int main()
{
	float R1, R2;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter R1 :";
		cin >> R1;
		cout << "Enter R2 :";
		cin >> R2;
		cout << RingS(R1, R2) << endl;
	}
	cout <<  endl;
	system("pause");
	return 0;
}
