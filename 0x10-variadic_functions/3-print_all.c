#include "variadic_functions.h"

/**
 * p_all_char - prints chars from print_all
 * @chrArg: inbound chrArg
 * Return: just prints to SO
 */
void p_all_char(va_list chrArg)
{
	printf("%c", va_arg(chrArg, int));
}

/**
 * p_all_int - prints ints from print_all
 * @intArg: inbound intArg
 * Return: just prints to SO
 */
void p_all_int(va_list intArg)
{
	printf("%d", va_arg(intArg, int));
}

/**
 * p_all_float - prints floats from print_all
 * @fltArg: inbound float
 * Return: just prints to SO
 */
void p_all_float(va_list fltArg)
{
	float fltu;

	fltu = va_arg(fltArg, double);
	printf("%f", fltu);
}

/**
 * p_all_str - prints strings from print_all
 * @strArg: inbound strArg
 * Return: just prints to SO
 */
void p_all_str(va_list strArg)
{
	char *charArr;

	charArr = va_arg(strArg, char *);
	if (charArr == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", charArr);
}

/**
 * print_all - prints variadic variable arg list
 * @format: input arg strs format
 * Return: void (none)
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	va_list varArg;
	char *delim = "";
	char Arr[] = "cifs";
	bypass betty[] = {{p_all_char}, {p_all_int}, {p_all_float}, {p_all_str}};

	va_start(varArg, format);
	while (format && format[i])
	{
		j = 0;
		while (Arr[j])
		{
			if (format[i] == Arr[j])
			{
				printf("%s", delim);
				betty[j].fun(varArg);
				delim = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(varArg);
	printf("\n");
}
