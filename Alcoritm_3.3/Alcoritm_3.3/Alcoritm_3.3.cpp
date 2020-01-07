#include <stdio.h>
#include <iostream>                                               
using namespace std;
const int NotUsed = system("color F0");
int main() {
	int i, j;
	int N;
	cout << "Enter N:";
	cin >> N;
	for (i = 1; i <= N; i++) {
		cout << endl;
		for (j = 1; j <= N; j++)
			cout << i * j << "\t";
	}
	cout << endl;
	system("pause");
	return 0;
}
