#include "main.h"

/**
 * print_diagonal - a function that prints bslash to SO
 * @n: number of times char printed
 * Return: nothing, is void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = n; i > 0; i--)
		{
			j=i;
			while (j < n)
			{
				_putchar(' ');
				j++;
			}
				_putchar('\\');
				_putchar('\n');

		}
	}
	_putchar('\n');
}
