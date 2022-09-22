#include "main.h"

/**
 * print_line - a function that prints line to SO
 * @n: number of times char printed
 * Return: nothing, is void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
