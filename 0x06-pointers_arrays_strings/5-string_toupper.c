#include "holberton.h"

/**
 * *string_toupper - makes all lowercase uppercase in input str
 * @s: input string
 * Return: stronker str
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
