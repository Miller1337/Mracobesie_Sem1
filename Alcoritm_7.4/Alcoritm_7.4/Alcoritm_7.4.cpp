#include <iostream>
#include <locale>
using namespace std;

int lenstr(const char* s) {
	int i = 0;
	while (*s++) {
		++i;
	}

	return i;

}
char* Nizregandspace(char* ss)
{
	int i = 0, j = 0, ch = 0;


	for (i = 0; i < lenstr(ss); i++) {

		if (ss[i] >= 'A' && ss[i] <= 'Z') {
			ss[i] += 32;
		}
	}

	return ss;

}
bool Palindrom(const char* str)
{
	int length = lenstr(str);

	for (int i = 0; i < length / 2; i++) {
		if (str[i] == str[length - i - 1])
		{
			return true;
		}
		else { return false; }
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 0, j, n = 0, ch = 0;
	char str1[100];


	cout << "Введите 1 " << '\n';
	cin.getline(Nizregandspace(str1), lenstr(str1));



	for (i = 0; i < strlen(str1); i++)
	{
		if (str1[i] == ' ')
		{
			for (j = i; j < n; j++)
				str1[j] = str1[j + 1];
		}
	}
	n = lenstr(str1);
	cout << str1;

	if (Palindrom(str1) == true) {
		cout << " yes";
	}
	else if (Palindrom(str1) == false) {
		cout << " no";
	}
	cout << endl;
	system("pause");
	return 0;
}
