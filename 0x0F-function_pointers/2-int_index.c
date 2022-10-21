#include "function_pointers.h"

/**
 * int_index - fun that invokes fun that searches for int ind
 * @array: target int array
 * @size: size of int array
 * @cmp: pointer to function to invoke
 * Return: int index of target match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!(array) || size <= 0 || !(cmp))
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
