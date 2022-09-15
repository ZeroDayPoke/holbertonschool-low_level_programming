#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'betty compliant example'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastN = (n % 10);
	if (lastN > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastN);
	}
	else if (lastN == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lastN);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastN);
	}
	return (0);
}
