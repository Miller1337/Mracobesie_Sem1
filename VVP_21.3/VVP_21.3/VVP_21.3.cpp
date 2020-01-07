
#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a;
	string s;
	cout << "Введите слова с повторяющимися буквами:"<<endl;
	getline(cin, s);
	a = s.length();
	char c = s[0];
	for (int i = 1; i < a; i++) {
		if (s[i] == c) 
		{
			s[i] = '.'; 
		}
	}
	cout << s<<endl;
	system("PAUSE");
	return 0;
}



