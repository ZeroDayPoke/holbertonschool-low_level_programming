#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("icfssiixtviiiiiiii", 3, 'B', 3.333, "", NULL, 1, 1, 2, 3, 4, 'b');
    print_all("cccic", 102, 116, 104, 1, 115);
    print_all(NULL);
    return (0);
}
