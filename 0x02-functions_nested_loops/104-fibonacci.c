#include <stdio.h>

/**
 * main - prints first 98 fib seq nums
 * Return: 0 always success
 */
int main(void)
{
	int numCount = 0;
	unsigned long num1 = 1, num2 = 2, num3, num4, num5, num6, num7;

	printf("1, 2, ");
	while (numCount < 89)
	{
		num3 = num1 + num2;
		printf("%lu, ", num3);
		numCount++;
		num1 = num2;
		num2 = num3;
	}
	num4 = num2 / 10000;
	num5 = num3 / 10000;
	num6 = num2 % 10000;
	num7 = num3 % 10000;
	while (numCount <= 98)
	{
		num1 = num4 + num5;
		num2 = num6 + num7;
	}
	return (0);
}
