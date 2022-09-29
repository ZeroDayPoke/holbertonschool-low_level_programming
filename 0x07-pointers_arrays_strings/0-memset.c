#include "main.h"

/**
 * *_memset - fill memory to n with specified byte
 * @s: input string
 * @b: char to replace with
 * @n: number of replacements
 * Return: modified s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
