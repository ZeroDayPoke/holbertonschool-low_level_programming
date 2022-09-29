#include "main.h"

/**
 * *_strchr - points to first instance of c in s
 * @s: input string
 * @c: char to be located
 * Return: point to first instance or NULL if none
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;
	while (s[i])
	{
		i++;
	}
	while (j <= i)
	{
		if (s[j] == c)
		{
			s += j;
			return (s);
		}
		j++;
	}
	return (NULL);
}
