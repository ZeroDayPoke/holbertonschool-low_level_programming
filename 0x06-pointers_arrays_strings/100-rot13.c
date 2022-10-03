#include "holberton.h"

/**
 * *rot13 - encodes / decodes using ROT13 sub ciph
 * @s: input string
 * Return: encoded / decoded input
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
		{
			s[i] += 13;
			continue;
		}
		while ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
		{
			s[i] -= 13;
			continue;
		}
	}
	return (s);
}
