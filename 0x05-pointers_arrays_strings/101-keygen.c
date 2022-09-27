#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "main.h"

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
		_putchar(rand() % 128);
	}
	return(0);
}
