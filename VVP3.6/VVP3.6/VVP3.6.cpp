// VVP3.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int A = 0, x=0;
	cout << "Enter A:";
	cin >> A;
	x = A * A;
	x = x * x;
	x = x * x;
	
	cout <<"A="<< x<<endl;


	system("pause");
	return 0;
}

