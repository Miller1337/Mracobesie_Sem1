#include "Life.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;

Life::Life(size_t x, size_t y)
{
	a = x; b = y;
	space = new int* [a];
	for (int i = 0; i < a; i++) {
		space[i] = new int[b];
		for (int j = 0; j < b; j++)
			space[i][j] = 0;
	}
	SP = new int* [a];
	for (int i = 0; i < a; i++) {
		SP[i] = new int[b];
		for (int j = 0; j < b; j++)
			SP[i][j] = 0;
	}
}

Life::~Life()
{

}


int Life::checkRule(int i, int j)
{
	int lifeCount = 0;

	for (int c = i - 1; c < i + 2; c++)
		for (int d = j - 1; d < j + 2; d++)
			lifeCount = lifeCount + SP[c][d];
	lifeCount = lifeCount - SP[i][j];

	if (lifeCount == 3 && SP[i][j] == 0)
		space[i][j] = 1;
	if ((lifeCount < 2 || lifeCount > 3) && SP[i][j] == 1)
		space[i][j] = 0;

	for (int z = 1; z < a - 1; z++)
		for (int x = 1; x < b - 1; x++)
			SP[z][x] = space[z][x];

	return space[i][j];
}

void Life::printSpace()
{
	for (int i = 1; i < a - 1; i++) {
		for (int j = 1; j < b - 1; j++)
			if (space[i][j] == 1)
				cout << "*";
			else
				cout << ".";
		cout << endl;

	}
}

void Life::generateLife()
{
	for (int i = 1; i < a - 1; i++)
		for (int j = 1; j < b - 1; j++)
			space[i][j] = rand() % 2;
	for (int i = 1; i < a - 1; i++)
		for (int j = 1; j < b - 1; j++)
			SP[i][j] = space[i][j];
}

void Life::runLife()
{
	generateLife();
	printSpace();
	Sleep(1000);
	system("cls");
	while (1) {
		for (int i = 1; i < a - 1; i++)
			for (int j = 1; j < b - 1; j++)
				checkRule(i, j);
		printSpace();
		Sleep(100);
		system("cls");
		
	}
}