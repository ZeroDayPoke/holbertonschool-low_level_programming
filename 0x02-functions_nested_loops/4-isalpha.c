#include "main.h"

/**
 * _isalpha - a function that determines if input char is alphabetical
 * @c: input char
 * Return: 1 if alphabetical; 0 otherwise
 */
int _isalpha(int c)
{
	char cc;

	for (cc = 'a'; cc <= 'z'; cc++)
	{
		if (cc == c)
		{
			return (1);
		}
	}
	for (cc = 'A'; cc <= 'Z'; cc++)
	{
		if (cc == c)
		{
			return (1);
		}
	}
	return (0);
}
