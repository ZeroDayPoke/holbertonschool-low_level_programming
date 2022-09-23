#include <stdio.h>

/**
 * main - prints first 98 fib seq nums
 * Return: 0 always success
 */
int main(void)
{
	int numCount = 0;
	unsigned long num1, num2, num3;

	printf("1, ");
	printf("2, ");
	num1 = 1;
	num2 = 2;
	while (numCount < 89)
	{
		num3 = num1 + num2;
		printf("%lu, ", num3);
		numCount++;
		num1 = num2;
		num2 = num3;
	}
	num3 = num1 + num2;
	printf("%lu\n", num3);
	return (0);
}
