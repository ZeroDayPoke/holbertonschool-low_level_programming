#include "variadic_functions.h"

/**
 * print_all - prints variadic variable arg list
 * @format: total dynamic strings in... named format
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	va_list varArgList;
	char fArr[] = {"cifs"};

	va_start(varArgList, format);
	while (format[i])
	{
		j = 0;
		while (format[i] != fArr[j])
		{
			printf("%s, ", va_arg(varArgList, char *));
			j++;
		}
		i++;
	}
	va_end(varArgList);
	printf("\n");
}
