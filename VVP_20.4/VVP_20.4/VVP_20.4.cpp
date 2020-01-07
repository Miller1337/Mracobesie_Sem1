#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a, c = 0;
	string s(100, '\0');
	cout << "Enter symbols:";
	cin >> s;
	a = s.size();
	cout << a << endl;
	for (int i = 0; i < a; i++) 
	{
		if (s[i] == 'C')
		{
			s.insert(i, 1, 'C');
			i++;
			a++;
		}
	}
	cout << s<<" "<< endl;
	system("pause");
	return 0;
}