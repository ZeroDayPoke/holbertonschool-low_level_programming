#include "main.h"

/**
 * _islower - a function that determines if character is lower case
 *
 * Return: 1 if lowercase; 0 otherwise
 */
int _islower(int c)
{
	char cc;

	for (cc = 'a'; cc <= 'z'; cc++)
	{
		if (cc == c)
		{
			return (1);
		}
	}
	return (0);
}
