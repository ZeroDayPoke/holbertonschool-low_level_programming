#include <stdio.h>

/**
 * main - prints fib seq sum L4MM
 * Return: 0 always success
 */
int main(void)
{
	long num1, num2, num3, sum = 0;

	num1 = 1;
	num2 = 2;
	sum = 2;
	while (num3 < 4000000)
	{
		num3 = num1 + num2;
		if (num3 % 2 == 0)
		{
			sum += num3;
		}
		num1 = num2;
		num2 = num3;
	}
	printf("%ld\n", sum);
	return (0);
}
