#include "holberton.h"

/**
 * _strcmp - compares strings ASCII values
 * @s1: first string
 * @s2: second string
 * Return: sum of ASCII dif
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, sum = 0;

	while (s1[i] && s2[i])
	{
		sum += s1[i] - s2[i];
		i++;
	}
	return (sum);
	return (*s1 - *s2);
}
