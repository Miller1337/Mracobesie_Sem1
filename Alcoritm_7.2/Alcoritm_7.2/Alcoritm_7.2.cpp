#include <iostream>
#include <locale>
const int NotUsed = system("color F0");
using namespace std;

int lenstr(const char* s) {
	int i = 0;
	while (*s++) {
		++i;
	}

	return i;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int i, j;

	char str1[100];

	cout << "Введите " << '\n';
	cin.getline(str1, lenstr(str1));


	for (i = 0; i < lenstr(str1); i++) {
		if (str1[i] >= 'A' && str1[i] <= 'Z') {
			str1[i] += 32;
		}
	}
	cout << str1;
	cout << endl;
	system("pause");
	return 0;
}
