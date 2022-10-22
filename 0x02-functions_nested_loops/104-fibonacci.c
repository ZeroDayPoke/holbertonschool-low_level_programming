#include <stdio.h>

/**
 * main - prints first 100 fib seq nums (exc 0 & 1)
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
	num4 = num1 / 10000;
	num5 = num2 / 10000;
	num6 = num1 % 10000;
	num7 = num2 % 10000;
	while (numCount < 96)
	{
		num1 = num4 + num5;
		num2 = num6 + num7;
		if (num2 >= 10000)
		{
			num1++;
			num2 %= 10000;
		}
		printf("%lu%lu, ", num1, num2);
		numCount++;
		num4 = num5;
		num6 = num7;
		num5 = num1;
		num7 = num2;
	}
	num1 = num4 + num5;
	num2 = num6 + num7;
	if (num2 >= 10000)
	{
		num1++;
		num2 %= 10000;
	}
	printf("%lu%lu", num1, num2);
	printf("\n");
	return (0);
}
