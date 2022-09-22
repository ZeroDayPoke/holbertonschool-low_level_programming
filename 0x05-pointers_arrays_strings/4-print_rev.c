#include "main.h"

/**
 * print_rev - reverse prints string to SO
 * @s: string input
 * Return: void
 */
void print_rev(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}
	while (a != -1)
	{
		_putchar(*(s + a));
		a--;
	}
	_putchar('\n');
}
