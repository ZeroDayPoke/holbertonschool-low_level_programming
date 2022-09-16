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
	char charArr[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
						'9', 'a', 'b', 'c', 'd', 'e', 'f'};
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(charArr[i]);
	}
	putchar('\n');
	return (0);
}
