#include "main.h"

/**
 * _pow_recursion - computes x^y
 * @x: variable
 * @y: exp
 * Return: int x^y
 */
int _pow_recursion(int x, int y)
{
	int powX = x;

	if (y == 0)
	{
		return (1);
	}
	else if (y < -1)
	{
		return (-1);
	}
	return (powX *= _pow_recursion(x, (y - 1)));
}
