#include <stdio.h>

/**
 * main - prints first 50 fib seq nums
 * Return: 0 always success
 */
int main(void)
{
	int numCount = 0;
	long num1, num2, num3;

	printf("1, ");
	printf("2, ");
	num1 = 1;
	num2 = 2;
	while (numCount <= 48)
	{
		num3 = num1 + num2;
		printf("%ld, ", num3);
		numCount++;
		num1 = num2;
		num2 = num3;
	}
	printf("\n");
	return (0);
}
