#include <stdio.h>

/**
 * main - a function that prints a square
 * Return: 0 always success
 */
int main(void)
{
	long i = 2;
	long n = 612852475143;
	long factor[99];
	int factorCount = 0;

	while (i <= (n / 2))
	{
		if (n % i == 0)
		{
			n = (n / i);
			factor[factorCount] = i;
			factorCount++;
		}
		else
		{
			i++;
		}
	}
	factorCount++;
	factor[factorCount] = n;
	printf("%ld\n", factor[(factorCount)]);
	return (0);
}
