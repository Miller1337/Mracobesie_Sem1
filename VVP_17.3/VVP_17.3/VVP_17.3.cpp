
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i, k, y=0, l=0, z=0, x=0, c=-1;
	cout << "Введите N:";
	cin >> n;
	cout << "Введите K:";
	cin >> k;
	int* a = new int[n];
	int* b = new int[n];
	for (i = 0; i < n; i++) {
		cout << "a[i]: ";
		cin >> a[i];
	}
	k--;
	for ( i = 1; i <n; i++)
	{
		if (a[i - 1] != a[i])
		{
			y++;
			if (y==k)
			{
				l = i;
			}
			z = i;
		}
		if (y==k)
		{
			x++;
		}
	}
	for ( i = 1; i < l; i++)
	{
		c++;
		b[c] = a[i];
	}
	for ( i = z; i < n; i++)
	{
		c++;
		b[c] = a[i];
	}
	for ( i = l+x; i <z; i++)
	{
		c++;
		b[c] = a[i];
	}
	for ( i = l; i < l+x; i++)
	{
		c++;
		b[c] = a[i];
	}
	for ( i = 0; i < n; i++)
	{
		cout << b[i] << " ";
	}
	system("pause");
	return 0;

}