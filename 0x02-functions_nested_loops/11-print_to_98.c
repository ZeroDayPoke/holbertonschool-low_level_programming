#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints ints in range from n to 98
 * @n: range int input
 * Return: 0 uwu true
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		do {
			printf("%i, ", n);
			n++;
		} while (n != 98);
	}
	else if (n > 98)
	{
		do {
			printf("%i, ", n);
			n--;
		} while (n != 98);
	}
	else
	{
	}
	printf("98");
	printf("\n");
}
