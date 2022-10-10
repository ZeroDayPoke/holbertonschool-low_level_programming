#include "main.h"

int _strlen = 0; /* global bb */

/**
 * _strlen_recursion - print str length
 * @s: input string
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (s[0])
	{
		_strlen++;
		_strlen_recursion(s + 1);
	}
	return (_strlen);
}
