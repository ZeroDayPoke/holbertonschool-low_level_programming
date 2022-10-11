#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees mem from clutches of malloc
 * @grid: input 2D Arr to be set free
 * @height: height of 2D Arr
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;
	
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
