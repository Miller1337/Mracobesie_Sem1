// VVP_13.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int A, B, N;
	int arr[5];
	cout << "Enter A, B , N :";
	cin >> A >> B >> N;
	arr[0] = A;
	arr[1] = B;
	for (int i = 2,sum=A+B; i < N; i++)
	{
		cout << endl;
		arr[i] = sum;
		sum *= 2;
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}

