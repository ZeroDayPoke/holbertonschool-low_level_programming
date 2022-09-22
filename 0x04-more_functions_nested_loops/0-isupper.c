#include "main.h"

/**
 * _isupper - a function that determines if charset representative number is uppercase
 * @c: int in
 * Return: 1 if corresponding charset is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c < 65 || c > 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
