#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - create and init array of chars
 * @size: size of array for da malloc
 * @c: char to init array with
 * Return: NULL if no size else point to array
 */
char *create_array(unsigned int size, char c)
{
	char *charArr;
	unsigned int Zard;

	if (!(size))
	{
		return (NULL);
	}
	charArr = malloc(sizeof(char) * size);
	if (!(charArr))
	{
		return (NULL);
	}
	for (Zard = 0; Zard < size; Zard++)
	{
		charArr[Zard] = c;
	}
	return (charArr);
}
