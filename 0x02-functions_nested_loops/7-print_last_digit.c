#include "main.h"

/**
 * print_last_digit - a function that returns the last digit of an int
 * @nIn: input int value
 * Return: last digit of nIn
 */
int print_last_digit(int nIn)
{
	int nLast = (nIn % 10);

	return (nLast);
}
