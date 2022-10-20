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
	int i, j;

	if ((!(name)) || (!(owner)) || (age < 0))
	{
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
		/* get strlen */
	}
	for (j = 0; owner[j]; j++)
	{
		/* get strlen */
	}
	newDoge = malloc(sizeof(dog_t));
	if (!(newDoge))
	{
		return (NULL);
	}
	newDoge->name = malloc(i + 1);
	if (!(newDoge->name))
	{
		free(newDoge);
		return (NULL);
	}
	newDoge->owner = malloc(j + 1);
	if (!(newDoge->owner))
	{
		free(newDoge->name);
		free(newDoge);
		return (NULL);
	}
	_strcpy(newDoge->name, name);
	newDoge->age = age;
	_strcpy(newDoge->owner, owner);
	/* printf("%p\n", name); */
	/* printf("%p\n", newDoge->name); */
	return (newDoge);
}
