#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'betty compliant example'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intArr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(intArr[i]);
	}
	putchar('\n');
	return (0);
}
