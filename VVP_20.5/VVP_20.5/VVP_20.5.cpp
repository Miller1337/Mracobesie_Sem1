#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a=0, b, c = 0, d = 0, s;
	string s1;
	string s0;
	cout << "Enter Line S:";
	cin >> s1;
	cout << "Enter Line S0:";
	cin >> s0;
	b = s0.size();
	while (d != -1)
	{
		d = s1.find(s0);
		if (d != -1)
		{
			a++;
			s1.erase(d, b);
		}

	}
	cout << a<<endl;

	system("PAUSE");
	return 0;
}

