#include "dog.h"

/**
 * new_dog - creates new doge w/ dog struct
 * @name: name of doge
 * @age: age of doge
 * @owner: owner of doge
 * Return: new doge of dog_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDoge;

	if (!(name) || !(owner) || age < 0)
	{
		return(NULL);
	}
	newDoge = malloc(sizeof(dog_t));
	if (!(newDoge))
	{
		free(newDoge);
		return(NULL);
	}
	newDoge->name = malloc(sizeof(name));
	if (!(newDoge->name))
	{
		free(newDoge->name);
		return(NULL);
	}
	newDoge->owner = malloc(sizeof(owner));
	if (!(newDoge->owner))
	{
		free(newDoge->owner);
		return(NULL);
	}
	newDoge->name = name;
	newDoge->age = age;
	newDoge->owner = owner;
	return(newDoge);
}
