
#include <stdio.h>
#include <cmath>


using namespace std;

int main()
{
	float x1, y1;
	printf("x1:");
	scanf_s("%f", &x1);
	printf("y1:");
	scanf_s("%f", &y1);

	float x2, y2;
	printf("x2:");
	scanf_s("%f", &x2);
	printf("y2:");
	scanf_s("%f", &y2);

	printf_s("P:%f\n", 2 * (x1 - x2) + (y1 - y2));// добавить abs для отрицательных чисел

	printf_s("S:%f\n", (x1 - x2) * (y1 - y2));// добавить abs для отрицательных чисел

	system("pause");
	return 0;
}