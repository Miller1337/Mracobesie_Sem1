// Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл
//

#include <iostream>
using namespace std;

int main()
{
	int b = 0, Kb = 0;
	cout << "Enter b:";
	cin >> b;
	Kb = b / 1024;
	cout << "Kb=" << Kb << endl;
	system("pause");
	return 0 ;

}


