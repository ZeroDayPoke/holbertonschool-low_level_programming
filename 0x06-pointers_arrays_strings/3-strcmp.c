#include "holberton.h"

/**
 * _strcmp - compares strings ASCII values
 * @s1: first string
 * @s2: second string
 * Return: first dif
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, dif = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		else
		{
			dif = s1[i] - s2[i];
			break;
		}
	}
	return (dif);
}
