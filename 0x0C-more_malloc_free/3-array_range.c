#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates intArr w values min to max
 * @min: smallest int
 * @max: largest int
 * Return: pointer to intArr
 */
int *array_range(int min, int max)
{
	int *intArr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	intArr = malloc(sizeof(int) * (max - min + 1));
	if (!(intArr))
	{
		free(intArr);
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		*(intArr + (i - min)) = i;
	}
	return (intArr);
}
