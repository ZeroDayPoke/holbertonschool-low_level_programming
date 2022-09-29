#include "holberton.h"

/**
 * *_strncat - meows 2 strings together w/ limit
 * @dest: where big string goes and other smol string comes
 * @src: smol string input
 * @n: limit of big string
 * Return: big string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
