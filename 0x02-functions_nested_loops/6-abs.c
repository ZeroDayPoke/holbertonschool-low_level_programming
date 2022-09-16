#include "main.h"

/**
 * _abs - a function that prints abs. value of int
 * @nIn: input int value
 * Return: abs value of int
 */
int _abs(int nIn)
{
	int nAbs;

	if (nIn < 0)
	{
		nAbs = -nIn;
	}
	else
	{
		nAbs = nIn;
	}
	return (nAbs);
}
