#include "main.h"

/**
 * print_times_table - a function that prints the times tables of input n
 * @n: input number designating desired times table
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, p, pp;

	if (n <= 16 && n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (j = 1; j < n; j++)
			{
				p = (i * j);
				pp = (p / 10);
				if (p < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (p < 100)
				{
					_putchar(' ');
					_putchar((p / 10) + '0');
				}
				else
				{
					_putchar((p / 100) + '0');
					_putchar((pp % 10 ) + '0');
				}
				_putchar(p % 10 + '0');
				if (j < (n - 1))
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
