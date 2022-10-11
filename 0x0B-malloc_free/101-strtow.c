#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - breaks words in string apart
 * @str: input string
 * Return: pointer to word array or NULL or both
 */
char **strtow(char *str)
{
	int i, j, wCount = 1, totesLen = 0;
	char *argPoint;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		totesLen++;
		if (str[i] == " ")
		{
			wCount++;
		}
	}
}
