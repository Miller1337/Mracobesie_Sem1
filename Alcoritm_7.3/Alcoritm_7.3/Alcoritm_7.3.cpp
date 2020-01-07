#include <iostream>
#include <locale>
using namespace std;
const int NotUsed = system("color F0");
int lenstr(const char* s) {
	int i = 0;
	while (*s++) {
		++i;
	}

	return i;
}

char* Nizreg(char* ss)
{
	int i = 0, j = 0;

	for (i = 0; i < lenstr(ss); i++) {
		if (ss[i] >= 'A' && ss[i] <= 'Z') {
			ss[i] += 32;
		}
	}

	return ss;

}

int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	bool odin = false;
	char str1[100];
	char str2[100];
	cout << "Введите 1 " << '\n';
	cin.getline(Nizreg(str1), lenstr(str1));
	cout << "Введите 2" << '\n';
	cin.getline(Nizreg(str2), lenstr(str2));



	for (i = 0; i < lenstr(str1); i++) {
		if (str1[i] == str2[i]) {
			odin = true;
		}
		else { odin = false; break; }
	}
	if (odin == true) {
		cout << "yes";
	}
	else { cout << "no"; }
	cout << endl;
	system("pause");
	return 0;
}

