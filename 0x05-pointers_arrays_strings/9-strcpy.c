#include "main.h"

/**
 * *_strcpy - function for to copy chararr
 * @src: source of chararr
 * @dest: destination of chararr
 * Return: finaldestination
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (*(src + a) != '\0')
	{
		*(dest + a) = *(src + a);
		a++;
	}
	return (dest);
}
