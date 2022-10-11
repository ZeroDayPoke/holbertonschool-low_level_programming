#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - cats args together
 * @ac: int num of args
 * @av: values of dose args
 * Return: spits args back at user
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, totesLen = 0;
	char *argPoint;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			totesLen++;
		}
	}
	argPoint = malloc(sizeof(char) * (ac + totesLen + 1));
	if (!(argPoint))
	{
		free(argPoint);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			argPoint[k] = av[i][j];
			k++;
		}
		argPoint[k] = '\n';
		k++;
	}
	argPoint[k] = '\0';
	return (argPoint);
}
