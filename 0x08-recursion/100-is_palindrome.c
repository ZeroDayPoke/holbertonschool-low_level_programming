#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcmp - compares strings ASCII values
 * @s1: first string
 * @s2: second string
 * Return: first dif
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, dif = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		else
		{
			dif = s1[i] - s2[i];
			break;
		}
	}
	return (dif);
}

/**
 * is_palindrome - determines if string is pal
 * @s: string to check for palendromicness
 * Return: 1 if is pal else 0
 */
int is_palindrome(char *s)
{
	int sLen = 0, difRet;

	for (sLen = 0; s[sLen]; sLen++)
	{
		/* YOLO */
	}
	difRet = (_strcmp(s, _print_rev_recursion_2(s, sLen)));
	if (difRet == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _print_rev_recursion_2 - reverse returns s via recursion
 * @s: input string
 * sLen: input str length
 * Return: string reversed
 */
char *_print_rev_recursion_2(char *s, int sLen)
{
	char *sRet2;
	int i;

	sRet2 = malloc(sizeof(char) * (sLen + 1));
	if (!(sRet2))
	{
		free(sRet2);
		return (NULL);
	}
	for (i = 0; s[i]; i++)
	{
		sRet2[0 + i] = s[sLen - i - 1];
	}
	return (sRet2);
}
