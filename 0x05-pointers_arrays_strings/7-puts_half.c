#include "main.h"

/**
 * puts_half - prints second half of str
 * @str: string input
 * Return: void
 */
void puts_half(char *str)
{
	int a = 0;
	int b;

	while (*(str + a) != '\0')
	{
		a++;
	}
	for (b = (a / 2); b < a; b++)
	{
		_putchar(*(str + b));
	}
	_putchar('\n');
}
