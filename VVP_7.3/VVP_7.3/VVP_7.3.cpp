// Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным».

#include <iostream>
using namespace std;
int main()
{
	int A = 0;
	cout << "Enter A:";
	cin >> A;
	if (A >=10 &&  A  <= 99 && (A%2==0))
	{
		cout << "True"<<endl;
	}
	else
	{
		cout << "False"<<endl;
	}
	system("pause");
	return 0;
}

