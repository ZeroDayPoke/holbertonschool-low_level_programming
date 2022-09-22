#include "main.h"

/**
 * rev_string - reverse prints string to SO
 * @s: string input
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}
	a--;
	while (a > -1)
	{
		_putchar(*(s + a));
		a--;
	}
	_putchar('\n');
}
