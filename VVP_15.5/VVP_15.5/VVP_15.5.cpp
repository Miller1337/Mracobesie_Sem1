// VVP_15.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int N,b=0;
   cout << "N:";
   cin >> N;
   int* arr = new int[N];
   for (int i = 0; i < N; i++)
   {
	   cout << "arr:";
	   cin >> arr[i];
   }
   int a = arr[0];
   for (int i = 1; i < N; i++)
   {
	   if (a>arr[i])
	   {
		   b = arr[i];
		   arr[i] = a;
		   arr[i - 1] = b;
	   }
   }
   for (int i = 0; i < N; i++)
   {
	   cout << arr[i] << " ";
   }
   cout << endl;
   system("pause");
   return 0;
}

