#include "main.h"

/**
 * _strlen_recursion - print str length
 * @s: input string
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int _strlen = 0;

	if (s[0])
	{
		_strlen++;
		_strlen += _strlen_recursion(s + 1);
	}
	return (_strlen);
}
