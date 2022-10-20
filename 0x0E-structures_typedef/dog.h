#ifndef DOGE_H_
#define DOGE_H_

/**
 * librars below
 */
#include <unistd.h>
#include <stdlib.h>

/**
 * struct dog - basic doge struct
 * @name: name of doge
 * @age: age of doge
 * @owner: owner of doge
 *
 * Description: name age & owner of doge
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * prototype functions below
 */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
