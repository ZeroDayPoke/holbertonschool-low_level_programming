#include "main.h"

/**
 * print_number - function that prints ints
 * @n: int to be printed
 * Return: nothing, is void
 */
void print_number(int n)
{
	int nCount = 0;
	int intArr[10];
	int sign = 0;

	if (n < 0)
	{
		n = n * -1;
		sign = 1;
	}
	while (n > 9)
	{
		intArr[nCount] = (n % 10);
		nCount++;
		n /= 10;
	}
	intArr[nCount] = (n % 10);
	while (nCount >= 0)
	{
		if (sign == 1)
		{
			_putchar('-');
			sign = 0;
		}
		_putchar(intArr[nCount] + '0');
		nCount--;
	}
	_putchar('\n');
}
