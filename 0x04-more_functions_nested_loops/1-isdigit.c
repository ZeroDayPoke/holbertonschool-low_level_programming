#include "main.h"

/**
 * _isdigit - a function that determines if charset representative number is uppercase
 * @c: int in
 * Return: 1 if corresponding charset is decimal digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c < 48 || c > 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
