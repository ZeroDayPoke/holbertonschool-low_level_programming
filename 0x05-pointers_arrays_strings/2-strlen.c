#include "main.h"

/**
 * _strlen - function to find length of string
 * @s: string input
 * Return: string length
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}
	return (a);
}
