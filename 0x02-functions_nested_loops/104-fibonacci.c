#include <stdio.h>

/**
 * main - prints first 98 fib seq nums
 * Return: 0 always success
 */
int main(void)
{
	unsigned long numCount = 0, num1 = 1, num2 = 2, num3, num4, num5, num6, num7;

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
	while (numCount <= 95)
	{
		num1 = num4 + num5;
		num2 = num6 + num7;
		if (num2 >= 10000)
		{
			num1++;
			num2 %= 10000;
		}
		printf("%lu%lu", num1, num2);
		if (numCount != 95)
			printf(", ");
		numCount++;
		num4 = num5;
		num6 = num7;
		num5 = num1;
		num7 = num2;
	}
	printf("\n");
	return (0);
}
