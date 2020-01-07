#include <iostream>
#include <string>


using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	string s;
	int  c, a = -1, b = -1;
	cout << "Имя файла:" << endl;
	getline(cin, s);
	c = s.length();
	unsigned char f;
	for (int i = c - 1; i >= 0; i--) {
		if (s[i] == 92 && a == -1) {
			a = i;
			i--;
		}
		if (s[i] == 92 && a != -1) {
			b = i;
			break;
		}
	}
	if (b == -1) cout << s[a];
	else {
		s.erase(a, c - a);
		s.erase(0, b + 1);
		cout << s<<endl;
	}
	system("PAUSE");
	return 0;
}
