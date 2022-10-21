#include "variadic_functions.h"

/**
 * sum_them_all - function that sums dynamic num of int args
 * @n: number of int args
 * Return: sum of variadic int input args
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int totesTotal = 0, i;
	va_list numList;

	va_start(numList, n);
	for (i = 0; i < n; i++)
	{
		totesTotal += va_arg(numList, int);
	}
	va_end(numList);
	return (totesTotal);
}
