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
	int randChar = (rand() % 128);

	srand(time(NULL));
	printf("%d", randChar);
	return(0);
}
