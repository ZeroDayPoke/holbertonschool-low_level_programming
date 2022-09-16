#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'betty compliant example'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char charArr[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(charArr[i]);
	}
	putchar('\n');
	return (0);
}
