#include "holberton.h"

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
		if (i % 2 == 0)
			printf("%.2x%.2x ", b[i], b[i + 1]);
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
            printf("  ");
        printf("  ");
        for (i = size - remaining; i < size; i++)
            putchar(isprint(b[i]) ? b[i] : '.');
        putchar('\n');
    }
}
