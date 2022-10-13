#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - function that dynamically allocates mem and inits to 0
 * @nmemb: number of memberz in array
 * @size: size of memberz in array
 * Return: void pointer to location of mem or NULL if bad args or malloc fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *loca;
	unsigned int i;
	char *ptr;

	if ((!(nmemb)) || (!(size)))
	{
		return (NULL);
	}
	loca = malloc(nmemb * size);
	if (!(loca))
	{
		free(loca);
		return (NULL);
	}
	ptr = loca;
	for (i = 0; i < (nmemb * size); i++)
	{
		*(ptr + i) = 0;
	}
	return (loca);
}
