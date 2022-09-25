#include <stdio.h>

/**
 * main - prints first 98 fib seq nums
 * Return: 0 always success
 */
int main(void)
{
	int numCount = 0;
	unsigned long num1, num2, num3, num4, num5, num6;

	printf("1, 2, ");
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
	num6 = (num3 % 10);
	num3 /= 10;
	num5 = (num2 % 10);
	num2 /= 10;
	num4 = (num1 % 10);
	num1 /= 10;
	while (numCount < 94)
	{
		num3 = num1 + num2;
		num6 = num4 + num5;
		if (num6 > 9)
		{
			num3++;
			num6-= 10;
		}
		printf("%lu%lu, ", num3, num6);
		numCount++;
		num1 = num2;
		num2 = num3;
		num4 = num5;
		num5 = num6;
	}
	num3 = num1 + num2;
	num6 = num4 + num5;
	if (num6 > 9)
	{
		num3++;
		num6-= 10;
	}
	printf("%lu%lu\n", num3, num6);
	return (0);
}
