#include "main.h"

/**
 * _puts_recursion - recursively putchar s
 * @s: input string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s[0])
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else if (!(s[0]))
		_putchar('\n');
}
