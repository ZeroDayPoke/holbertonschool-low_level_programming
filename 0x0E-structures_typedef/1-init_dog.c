#include "dog.h"

/**
 * init_dog - init vals of dog struct w/ new doge d
 * @d: new doge to be init w/ dog struct
 * @name: owner of doge d
 * @age: age of doge d
 * @owner: owner of doge d
 * Return: none (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
