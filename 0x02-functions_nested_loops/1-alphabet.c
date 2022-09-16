#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	char charArr[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(charArr[i]);
	}
	_putchar('\n');
}
