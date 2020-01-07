#include <iostream>
#include <cmath>
using namespace std;
const int NotUsed = system("color F0");

int main()
{
	int N, i, a, b, j;
	long double k, f;
	float d;
	a = 2;
	b = 0;
	j = 1;
	d = 0;

	cout << "Enter N:";
	cin >> N;
	{
		cout << pow(a, N) << endl;// 1)
	}
	for (i = 1; i <= N; i++) {//2)
		j = j * i;
	}
	cout << j << endl;
	k = 1.00;
	f = 1.00;
	for (b = 1; b < N + 1; b++) {//3)
		k = 1.00 + (1.00 / (b * b));
		f = f * k;
	}
	cout << f << endl;
	i = 0;
	while (i < N) {//4)
		d = sqrt(2 + d);
		i++;
	}
	printf_s("%f", d);
	printf("\n");
	system("pause");
	return 0;
}
