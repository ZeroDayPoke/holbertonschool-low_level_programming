#include "main.h"

/**
 * prints alphabet
 *
 * Description: 'betty compliant example'
 *
 * Return: Always 0 (Success)
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
