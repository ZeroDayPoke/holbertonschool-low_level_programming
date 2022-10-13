#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - cats 2 strs (up to n bytes/chars of 2nd)
 * @s1: first string
 * @s2: second string
 * @n: bytes of second string to cat
 * Return: pointer to new catd string or NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *charArr;
	unsigned int Zard, i;

	if (!(s1))
	{
		s1 = "";
	}
	if (!(s2))
	{
		s2 = "";
	}
	charArr = malloc(sizeof(s1) + n + 1);
	if (!(charArr))
	{
		return (NULL);
	}
	for (Zard = 0; s1[Zard]; Zard++)
	{
		charArr[Zard] = s1[Zard];
	}
	for (i = 0; (s2[i] && (i < n)); i++, Zard++)
	{
		charArr[Zard] = s2[i];
	}
	return (charArr);
}
