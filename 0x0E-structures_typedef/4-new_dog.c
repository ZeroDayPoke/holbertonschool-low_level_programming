#include "dog.h"

/**
 * *_strcpy - function for to copy chararr
 * @src: source of chararr
 * @dest: destination of chararr
 * Return: finaldestination
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (*(src + a))
	{
		*(dest + a) = *(src + a);
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

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

	if (!(name) || age < 0 || !(owner))
	{
		return (NULL);
	}
	newDoge = malloc(sizeof(dog_t));
	if (!(newDoge))
	{
		free(newDoge);
		return (NULL);
	}
	newDoge->name = malloc(sizeof(name));
	if (!(newDoge->name))
	{
		free(newDoge->name);
		return (NULL);
	}
	newDoge->owner = malloc(sizeof(owner));
	if (!(newDoge->owner))
	{
		free(newDoge->owner);
		return (NULL);
	}
	newDoge->name = _strcpy(newDoge->name, name);
	newDoge->age = age;
	newDoge->owner = _strcpy(newDoge->owner, owner);
	/* printf("%p\n", name); */
	/* printf("%p\n", newDoge->name); */
	return (newDoge);
}
