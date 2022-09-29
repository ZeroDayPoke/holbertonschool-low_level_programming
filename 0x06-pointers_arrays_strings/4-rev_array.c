#include "holberton.h"

/**
 * reverse_array - reverse intArr a
 * @a: array of ints
 * @n: number of elements in a
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int intArr[999], i = 0;

	while (i < n)
	{
		intArr[i] = a[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		a[i] = intArr[n - i - 1];
		i++;
	}
}
