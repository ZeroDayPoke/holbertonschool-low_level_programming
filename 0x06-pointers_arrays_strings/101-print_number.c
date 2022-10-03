#include "holberton.h"

/**
 * print_number - puts int number to SO
 * @n: input number
 * Return: void
 */
void print_number(int n)
{
	int i, sign, intArr[11];

	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	for (i = 0; (n / 10); i++)
	{
		intArr[i] = (n % 10);
		n /= 10;
	}
	intArr[i] = (n % 10);
	for (; i >= 0; i--)
	{
		if (sign == 1)
		{
			_putchar('-');
			sign = 0;
		}
		_putchar(intArr[i] + '0');
	}
}
