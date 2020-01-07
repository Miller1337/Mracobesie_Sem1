// VVP_21.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int a = INT_MAX, b=0, c;
	string s;
	cout << "Введите предложение: ";
	getline(cin, s);
	c = s.size();
	for (int i = 0; i < c; i++) {
		if (s[i] != ' ') {
			b++;
		}
		if ((s[i] == ' ') || (i == c - 1)) {
			if ((b != 0) & (b < a)) {
				a = b;
			}
			b = 0;
		}
	}
	cout << "Длина самого короткого слова: " << a<<endl;
	system("PAUSE");
	return 0;
}
