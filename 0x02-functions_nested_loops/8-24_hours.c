#include "main.h"

/**
 * jack_bauer - a function that prints every minute of day
 *
 * Return: always true
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		if (i < 10)
		{
			_putchar('0');
			_putchar(i);
			_putchar(':');
		}
		else
		{
			_putchar(i);
			_putchar(':');
		}
		for (j = 0; j < 60; j++)
		{
			if (j < 10)
			{
				_putchar('0');
				_putchar(j);
				_putchar('\n');
			}
			else
			{
				_putchar(j);
				_putchar('\n');
			}
		}
	}
}
