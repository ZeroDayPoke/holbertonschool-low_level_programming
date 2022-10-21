#include "function_pointers.h"

/**
 * array_iterator - fun that invokes function that operates on array int mems
 * @array: target int array
 * @size: size of int array
 * @action: pointer to function to invoke
 * Return: none (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!(array) || size < 1 || !(action))
	{
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
