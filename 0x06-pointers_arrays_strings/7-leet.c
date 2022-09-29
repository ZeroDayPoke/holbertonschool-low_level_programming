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
	char r3k7[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == ArrS[j])
			{
				s[i] = r3k7[j];
			}
		}
		i++;
	}
	return (s);
}
