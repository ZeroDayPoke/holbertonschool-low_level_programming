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
	int i, j, count;

	count = 1;
	for (i = 0; i < 9; i++)
	{
		for (j = count; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		count++;
	}
	putchar('\n');
	return (0);
}
