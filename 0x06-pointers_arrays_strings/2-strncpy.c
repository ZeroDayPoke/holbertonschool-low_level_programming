#include "holberton.h"

/**
 * *_strncpy - copy src to dest w/ n limit
 * @dest: where for to put string cpy
 * @src: where string comes from
 * @n: limit of copy
 * Return: cpyd string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
