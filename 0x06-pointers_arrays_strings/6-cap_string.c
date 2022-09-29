#include "holberton.h"

/**
 * *cap_string - makes all words proper nouns
 * @s: input string
 * Return: such a proper string
 */
char *cap_string(char *s)
{
	int j, i = 0;
	char ArrS[] = {',', ';', '.', '!', '?', '"', '(',
					')', '{', '}', ' ', '\t', '\n'};

	while (s[i])
	{
		for (j = 0; ArrS[j]; j++)
		{
			if (s[i - 1] == ArrS[j] && (s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}
	return (s);
}
