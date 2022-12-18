#include "holberton.h"

/**
 * print_buffer - prints b to SO
 * @b: buffer to print
 * @size: size of buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, remaining;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		if (i % 10 == 0)
			printf("%.8x: ", i);
		printf("%.2x", b[i]);
		if (i % 2 == 1)
			putchar(' ');
		if (i % 10 == 9)
		{
			for (j = i - 9; j <= i; j++)
				putchar(isprint(b[j]) ? b[j] : '.');
			putchar('\n');
		}
	}
	remaining = size % 10;
	if (remaining > 0)
	{
		for (i = 0; i < 10 - remaining; i++)
		{
			putchar(' ');
			putchar(' ');
			if (i % 2 == 1)
				putchar(' ');
		}
		putchar(' ');
		for (i = size - remaining; i < size; i++)
			putchar(isprint(b[i]) ? b[i] : '.');
		putchar('\n');
	}
}
