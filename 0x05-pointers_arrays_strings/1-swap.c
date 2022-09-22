#include "main.h"

/**
 * swap_int - swaps two int values via pointer inputs
 * @a: 1st int pointer
 * @b: 2nd int pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmpA = *a;
	int tmpB = *b;
	*b = tmpA;
	*a = tmpB;
}
