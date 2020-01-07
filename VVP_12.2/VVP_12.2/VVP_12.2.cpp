// VVP_12.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

float Sign(float x)
{
	if (x < 0)
		return -1;
	else if (x == 0)
		return 0;
	else if (x > 0)
		return 1;
	return 0;
}
using namespace std;
int main()
{
	float A, B;
	cout << " Enter A,B: ";
	cin >> A >> B;
	cout << Sign(A) + Sign(B) << endl;
	system("pause");
	return 0;
} 


