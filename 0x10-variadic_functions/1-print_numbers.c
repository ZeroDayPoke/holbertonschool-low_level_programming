#include "variadic_functions.h"

/**
 * print_numbers - fun that prints ints w/ separator to SO
 * @separator: delimiter between ints in list
 * @n: number of int args
 * Return: none (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numList;

	va_start(numList, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numList, int));
		if ((i < (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	va_end(numList);
	printf("\n");
}
