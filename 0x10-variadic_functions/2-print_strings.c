#include "variadic_functions.h"

/**
 * print_strings - fun that prints strings w/ separator
 * @separator: delimiter between strs in list
 * @n: number of str args
 * Return: none (void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strList;
	char *charArr;

	va_start(strList, n);
	for (i = 0; i < n; i++)
	{
		charArr = va_arg(strList, char *);
		if (charArr != NULL)
		{
			printf("%s", charArr);
		}
		else
		{
			printf("(nil)");
		}
		if ((i < (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	va_end(strList);
	printf("\n");
}
