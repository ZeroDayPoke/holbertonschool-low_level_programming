#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - function to find length of string
 * @s: string input
 * Return: string length
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * tok_num - calcs num of toks in str
 * @str: string to tokenize
 * @delims: delims to tokenize based on
 * Return: num of tokens in overall str
 */
int tok_num(char *str)
{
	int tokTotal = 0, i, lineLen = 0;

	lineLen = _strlen(str);
	for (i = 0; i < lineLen; i++)
	{
		if (str[i] && str[i] != ' ')
		{
			tokTotal++;
			i += substrLen(str + i);
		}
	}
	return (tokTotal);
}

/**
 * substrLen - computes length of substr / token
 * @str: string in question
 * @delims: delims to tok based on
 * Return: length of substr
 */
int substrLen(char *str)
{
	int i = 0;

	while (str[i] && str[i] != ' ')
	{
		i++;
	}
	return (i);
}

/**
 * strtow - breaks words in string apart
 * @str: input string
 * Return: pointer to word array or NULL or both
 */
char **strtow(char *str)
{
	char **tokenStorage;
	int i, j = 0, k, tokTotal, ssLen = 0;

	if (!str)
		return (NULL);
	if (!(*str))
		return (NULL);
	tokTotal = tok_num(str);
	tokenStorage = malloc(sizeof(char *) * (tokTotal + 1));
	for (i = 0; i < tokTotal; i++)
	{
		while (str[j] == ' ')
			j++;
		ssLen = substrLen(str + j);
		tokenStorage[i] = malloc(sizeof(char) * (ssLen + 1));
		for (k = 0; k < ssLen; k++, j++)
			tokenStorage[i][k] = str[j];
		tokenStorage[i][k] = '\0';
	}
	tokenStorage[i] = NULL;
	return (tokenStorage);
}
