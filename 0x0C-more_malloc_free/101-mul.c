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
 * is_digits - checks if string only digits
 * @str: string in question
 * Return: 1 if true else 0 if false
*/
int is_digits(char *str)
{
	int i = 0;

	if (str[i] == '-')
		i++;
	for (; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
 * cleanleadz - moves pointer past leading 0s
 * @str: string in question
 * Return: sanitized str
*/
char *cleanleadz(char *str)
{
	while (*str && *str == '0')
	{
		str++;
	}
	return (str);
}

/**
 * makeBuff - creates storage for max prod str
 * @prodLenMax: max product size inc term byte
 * Return: pointer to buff
 */
char *makeBuff(int prodLenMax)
{
	char *daBuff;
	int i;

	daBuff = malloc(sizeof(char) * prodLenMax);
	if (!daBuff)
		exit(EXIT_FAILURE);
	for (i = 0; i < (prodLenMax - 1); i++)
	{
		daBuff[i] = '0';
	}
	daBuff[i] = '\0';
	return (daBuff);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of strings passed in
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	long i, j, num1Len, num2Len, maxLen, digC, tProd, fillD;
	char *prodBuff, *tmpBuff;

	if (argc != 3)
	{
		write(STDOUT_FILENO, "Error\n", 6);
		exit(98);
	}
	if (!is_digits(argv[1]) || !is_digits(argv[2]))
	{
		write(STDOUT_FILENO, "Error\n", 6);
		exit(98);
	}
	if (argv[1][0] == '0')
		argv[1] = cleanleadz(argv[1]);
	if (argv[2][0] == '0')
		argv[2] = cleanleadz(argv[2]);
	if (!(argv[1] || !argv[2]))
	{
		write(STDOUT_FILENO, "0\n", 2);
		return (0);
	}
	num1Len = (_strlen(argv[1]));
	num2Len = (_strlen(argv[2]));
	maxLen = num1Len + num2Len;
	prodBuff = makeBuff(maxLen + 1);
	tmpBuff = makeBuff(maxLen + 1);
	for (i = 0; i < num1Len; i++)
	{
		for (j = 0; j < num2Len; j++)
		{
			digC = (num1Len - i) + (num2Len - j);
			tProd = ((argv[1][i]) - '0') * ((argv[2][j]) - '0');
			if (tProd > 9)
			{
				tmpBuff[maxLen - digC] += (tProd / 10);
			}
			tmpBuff[maxLen - digC + 1] += (tProd % 10);
		}
		for (j = (maxLen - 1); j >= 0; j--)
		{
			fillD = ((tmpBuff[j] - '0') + (prodBuff[j] - '0'));
			if (fillD > 9)
			{
				prodBuff[j - 1] = prodBuff[j - 1] + 1;
				prodBuff[j] = ((fillD % 10) + '0');
			}
			else
				prodBuff[j] = (fillD + '0');
			tmpBuff[j] = '0';
		}
	}
	prodBuff = cleanleadz(prodBuff);
	for (j = 0; j < maxLen; j++)
		_putchar(prodBuff[j]);
	_putchar('\n');
	free(tmpBuff);
	free(prodBuff);
	return (0);
}
