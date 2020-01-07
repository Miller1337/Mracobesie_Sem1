#include <iostream>
using namespace std;
int main(void)
{
	float N;
	cout << "Enter N: ";
	cin >> N;
	float* A = new float[N];
	float* B = new float[N];
	for (int i = 0; i < N; i++)
	{
		cout << "A[i]:";
		cin >> A[i];
	}
	for (int i = 0, sum = 0; i < N; i++)
	{
		B[i] = (sum += A[i]) / (i +1);
	}
	cout << "Print A:"<<endl;
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "Print B:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}