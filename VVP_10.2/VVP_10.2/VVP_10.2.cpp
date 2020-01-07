//Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей).

#include <iostream>
using namespace std;

int main()
{
	double i,D=1.0,F=0.0;
	int N;
	cout << "Enter N:";
	cin >> N;
	for (double i = 1.1; F <= N; i+0.1)
	{
		D = D * i;
		F = F + 1;
		cout << D << endl;
	}
	system("pause");
	return 0;
}

