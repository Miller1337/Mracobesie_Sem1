//Даны целые числа a, b, c. Проверить истинность высказывания: «Существует треугольник со сторонами a, b, c».

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a=0,  b=0 , c=0 ;
	cout << "Enter  3 sides :";
	cin >> a >> b >> c;
	if ((a + b > c) && (b + c > a) && (c + a > b))
	{
		cout << "Traingle exist"<<endl;
	}
	else
	{
		cout << "Traingle not exist"<<endl;
	}
	system("pause");
	return 0;
}

