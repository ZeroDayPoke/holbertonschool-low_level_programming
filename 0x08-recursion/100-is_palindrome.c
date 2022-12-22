#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen_r - recursively calc str len
 * @s: string to find len of
 * Return: s' len
 */
int _strlen_r(char *s)
{
	int i = 0;

	if (s[i])
	{
		i++;
		i += _strlen_r(s + i);
	}
	return (i);
}

/**
 * is_palindrome - recursively determines if string is pal
 * @s: string to check for palendromicness
 * Return: 1 if is pal else 0
 */
int is_palindrome(char *s)
{
	int sLen = 0, i = 0;

	sLen = _strlen_r(s);
	if (!(s[0]))
		return (1);
	return (paliPower(s, sLen, i));
}

/**
 * paliPower - recursively determines if string is pal
 * @s: string to check
 * @sLen: length of str
 * @i: idx value
 * Return: 1 if is pal else 0
 */
int paliPower(char *s, int sLen, int i)
{
	if (s[i] == s[sLen / 2])
		return (1);
	if (s[i] == s[sLen - i - 1])
		return (paliPower(s, sLen, i + 1));
	return (0);
}
