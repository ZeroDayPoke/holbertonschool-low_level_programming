#include "main.h"

/**
 * print_diagonal - a function that prints bslash to SO
 * @n: number of times char printed
 * Return: nothing, is void
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
