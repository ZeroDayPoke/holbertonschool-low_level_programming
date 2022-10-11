#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - cats together 2 input strs
 * @s1: first input string
 * @s2: second input string
 * Return: point to new catd string
 */
char *str_concat(char *s1, char *s2)
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
	for (i = 0; s1[i]; i++)
	{
		/* Betty 4eva */
	}
	for (; s2[i]; i++)
	{
		/* Betty here 2 */
	}
	charArr = malloc(sizeof(char) * (i + 1));
	if (!(charArr))
	{
		return (NULL);
	}
	for (Zard = 0; s1[Zard]; Zard++)
	{
		charArr[Zard] = s1[Zard];
	}
	for (i = 0; s2[i]; i++)
	{
		charArr[Zard] = s2[i];
		Zard++;
	}
	return (charArr);
}
