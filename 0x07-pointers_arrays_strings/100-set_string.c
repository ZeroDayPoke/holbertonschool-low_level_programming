#include "main.h"

/**
 * set_string - sets pointer to pointer to char to pointer to char
 * @s: pointer to pointer to char
 * @to: pointer to char
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
