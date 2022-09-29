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
		for (j = 0; j < 13; j++)
		{
			if (s[i - 1] == ArrS[j] && (s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
