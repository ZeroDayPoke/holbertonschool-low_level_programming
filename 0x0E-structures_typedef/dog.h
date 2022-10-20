#ifndef DOGE_H_
#define DOGE_H_

/**
 * librars below
 */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * prototype functions below
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/* dog_t *new_dog(char *name, float age, char *owner); */
/* void free_dog(dog_t *d); */

#endif
