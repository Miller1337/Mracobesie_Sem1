#pragma once

class Life
{
private:
	int a;
	int b;
	int** space;
	int** SP;
	int checkRule(int i, int j);
	void printSpace();
	void generateLife();
public:
	Life(size_t x, size_t y);
	~Life();
	void runLife();
};