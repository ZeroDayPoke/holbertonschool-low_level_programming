#include "main.h"

/**
 * _rooter_up - used to increment intCheck since no globals allowed
 * @n: num to find sqrt of
 * @intCheck: arb num used to check for sqrt
 * Return: correct intCheck or HCF
 */
int _rooter_up(int n, int intCheck)
{
	if ((intCheck * intCheck) == n)
	{
		return (intCheck);
	}
	else if (intCheck == n)
	{
		return (-1);
	}
	return (_rooter_up(n, intCheck + 1));
}

/**
 * _sqrt_recursion - computes sqrt(n) if said whole int
 * @n: num to find sqrt of
 * Return: sqrt(n) or -1 if non-int sqrt
 */
int _sqrt_recursion(int n)
{
	int intCheck = 0;

	if (n < 1)
	{
		return (-1);
	}
	return (_rooter_up(n, intCheck));
}
