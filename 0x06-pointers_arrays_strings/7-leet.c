#include "holberton.h"

/**
 * *leet - convert string to 1337speak
 * @s: input string
 * Return: improved string
 */
char *leet(char *s)
{
	int j, i = 0;
	char ArrS[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == ArrS[j] && (j == 0 || j == 1))
			{
				s[i] = '4';
			}
			else if (s[i] == ArrS[j] && (j == 2 || j == 3))
			{
				s[i] = '3';
			}
			else if (s[i] == ArrS[j] && (j == 4 || j == 5))
			{
				s[i] = '0';
			}
			else if (s[i] == ArrS[j] && (j == 6 || j == 7))
			{
				s[i] = '7';
			}
			else if (s[i] == ArrS[j] && (j == 8 || j == 9))
			{
				s[i] = '1';
			}
		}
		i++;
	}
	return (s);
}
