#include "holberton.h"
#include <stdio.h>

/**
 * print_number - puts int number to SO
 * @n: input number
 * Return: void
 */
void print_number(int n)
{
	int i, j, sign = 0, orgN, digC = 1;

	if (n >= 0)
	{
		n *= -1;
		sign = 1;
	}
	orgN = n;
	for (i = 0; (n / 10); i++)
	{
		n /= 10;
	}
	j = i;
	for (; i > 0; i--)
	{
		digC *= 10;
	}
	if (sign != 1)
	{
		_putchar('-');
		_putchar(-(orgN / digC) + '0');
		orgN -= (digC * (orgN / digC));
		digC /= 10;
		j--;
	}
	orgN *= -1;
	for (; j >= 0; j--)
	{
		_putchar((orgN / digC) + '0');
		orgN -= (digC * (orgN / digC));
		digC /= 10;
	}
}
