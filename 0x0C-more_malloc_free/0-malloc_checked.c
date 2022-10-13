#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function that dynamically allocates mem via malloc
 * @b: amount of mem (in bytes) to allocate
 * Return: void pointer to location of mem allocated or exits 98 on fail
 */
void *malloc_checked(unsigned int b)
{
	void *loca;

	loca = malloc(b);
	if (!(loca))
	{
		exit(98);
	}
	return (loca);
}
