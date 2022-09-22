#include "main.h"

/**
 * print_numbers - a function that prints 0 thru 9
 * Return: nothing, is void
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
