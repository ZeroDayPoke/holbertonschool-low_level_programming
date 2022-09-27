#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

/**
 * main - function to crack 101
 * Return: 0 - always true
 */
int main(void)
{
	int i;
	time_t t;

	srand((unsigned) time(&t));

	for (i = 0; i < 50; i++)
	{
		printf("%d\n", rand() % 128);
	}
	return(0);
}
