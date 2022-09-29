#include "main.h"

/**
 * *_memcpy - copies n bytes worth of src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of replacements
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
