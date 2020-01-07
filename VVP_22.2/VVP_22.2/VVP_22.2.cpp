#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int l, a, N, K, i, j;
	char name[260];
	cin.getline(name, 260);
	strcat_s(name, ".txt");
	ofstream f(name);
	cout << "Введите количество строк и звезд в каждой строке:" << endl;
	cin >> N >> K;
	for (i = 0; i < N; i++) {
		for (j = 0; j < K; j++)	f << "*";
		f << endl;
	}
	system("PAUSE");
	return 0;
}

