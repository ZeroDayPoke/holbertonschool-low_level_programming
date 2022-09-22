#include "main.h"

/**
 * rev_string - reverses string
 * @s: string input
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0;
	char charArr[999];
	int b = 0;

	while (*(s + a) != '\0')
	{
		charArr[a] = *(s + a);
		a++;
	}
	a--;
	while (a > -1)
	{
		*(s + a) = charArr[b];
		a--;
		b++;
	}
	_putchar('\n');
}
