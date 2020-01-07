#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, n, l, k, p, m,j;
	cout << "Введите размер массива:";
	cin >> n;
	cout << "Введите число L:";
	cin >> l;
	int* a = new int[n];
	int* b = new int[n];
	for (i = 0; i < n; i++) 
	{
		cout << "Введите числа:";
		cin >> a[i];
	}
	l--;
	int c = 0;
	for (i = 0; i < n; i++)
	{
		k = 0;
		for (j = i+1; j < n; j++)
		{
			if (a[j] == a[i])
			{
				k++;
			}
			else break;
		}
		if (k >= l)
		{
			i += k;
			b[c] = 0;
			c++;
			//cout<<"0 ";
		}

		if (k < l)
		{
			b[c] = a[i];
			c++;
			//cout << c<<" ";
			//cout<<b[i]<< " ";
		}
	}

	for (int i = 0; i < c; i++) {
		cout << b[i]<<" ";
	}

	system("pause");
	return 0;
	
}