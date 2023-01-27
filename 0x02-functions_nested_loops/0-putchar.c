#include "main.h"

/**
 * main - entry point for putchar problem
 *
 * Description: 'betty compliant example'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charArr[] = "_putchar";
	int i = 0;

	for (; i < 8; i++)
	{
		_putchar(charArr[i]);
	}
	_putchar('\n');
	return (0);
}
