#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - duplicate and point to new char array
 * @str: input string to copy
 * Return: point to new string or NULL if something goes sideways
 */
char *_strdup(char *str)
{
	char *charArr;
	unsigned int Zard, i;

	if (!(str))
	{
		return (NULL);
	}
	for (Zard = 0; str[Zard]; Zard++)
	{
		/* Betty 4eva */
	}
	charArr = malloc(sizeof(char) * (Zard + 1));
	if (!(charArr))
	{
		return (NULL);
	}
	if (str[0] == 0)
	{
		charArr[0] = '\0';
	}
	for (i = 0; i <= Zard; i++)
	{
		charArr[i] = str[i];
	}
	return (charArr);
}
