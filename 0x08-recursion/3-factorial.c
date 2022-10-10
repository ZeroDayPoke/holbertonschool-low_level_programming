#include "main.h"

/**
 * factorial - uwu factorials
 * @n: number to run stat2013 on
 * Return: int factorial product AKA totesTotal
 */
int factorial(int n)
{
	int totesTotal = 1;

	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	totesTotal *= (n * factorial(n - 1));
	return (totesTotal);
}
