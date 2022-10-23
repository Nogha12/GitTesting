#include "auxiliary.h"
#include <iostream>
#include <string>

int testPrint(std::string text)
{
	std::cout << text;
	return 0;
}

int testAdd(int a, int b)
{
	return a + b;
}

int testDivide(int dividend, int divisor, int* remainder)
{
	*remainder = dividend % divisor;
	return dividend / divisor;
}

int testMultiply(int a, int b)
{
	return a * b;
}
