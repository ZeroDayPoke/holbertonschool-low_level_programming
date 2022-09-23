#include <stdio.h>

/**
 * main - program that prints sum nat num to 1024
 * Return: 0 always success
 */
int main(void)
{
	int sum, i;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0)
		{
			sum += i;
		}
		else if (i % 3 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
