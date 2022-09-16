#include "main.h"

/**
 * print_last_digit - a function that returns the last digit of an int
 * @nIn: input int value
 * Return: last digit of nIn
 */
int print_last_digit(int nIn)
{
	int nLast;
	int nAbs;

	if (nIn < 0)
	{
		nAbs = -nIn;
	}
	else
	{
		nAbs = nIn;
	}
	nLast = (nAbs % 10);
	_putchar(nLast + '0');
	return (nLast);
}
