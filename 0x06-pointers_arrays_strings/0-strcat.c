#include "holberton.h"

/**
 * *_strcat - meows 2 strings together
 * @dest: where big string goes and other smol string comes
 * @src: smol string input
 * Return: big string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
