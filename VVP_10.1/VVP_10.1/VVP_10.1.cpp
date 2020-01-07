//Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет.

#include <iostream>
using namespace std;

int main()
{
	float N,i;
	cout << "Enter N:";
	cin >> N;
	for (float i = 1; i <= 10; i++)
	{
		cout << "cost " << i / 10 << "kg kandies " << (i * N / 10)<<"cu"<<endl;
	}
	system("pause");
	return 0;
}