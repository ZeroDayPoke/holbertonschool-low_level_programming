#include "function_pointers.h"

/**
 * print_name - function that points to a function that prints name
 * @name: name to be printed
 * @f: function that prints
 * Return: none (void)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
