#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(":::", 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
