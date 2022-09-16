#include "main.h"

/**
 * times_table - a function that prints the times tables
 *
 * Return: 0 always success
 */
void times_table(void)
{
	int i;
	int j;
	int p;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j < 10; j++)
		{
			p = (i * j);
			if (p < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((p / 10) + '0');
			}
			_putchar(p % 10 + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
