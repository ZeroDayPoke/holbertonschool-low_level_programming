#include "dog.h"

/**
 * free_dog - function that frees type dog_t doge d
 * @d: doge to be freed from mem
 * Return: none (void)
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
