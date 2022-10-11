#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - points to 2D int Arr Grid initd at 0
 * @width: width of 2D Arr
 * @height: height of 2D Arr
 * Return: pointer to 2D Arr or NULL if problem
 */
int **alloc_grid(int width, int height)
{
	int **intArr;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	intArr = malloc(sizeof(int *) * height);
	if (!(intArr))
	{
		free(intArr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		intArr[i] = malloc(sizeof(int) * width);
		if (!(intArr))
		{
			free(intArr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			intArr[i][j] = 0;
		}
	}
	return (intArr);
}
