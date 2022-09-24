#include "main.h"

/**
 * _atoi - prints signed num from string input to SO
 * @s: input string
 * Return: 0 if no numbers present
 */
int _atoi(char *s)
{
	int a = 0;
	int sign = 1;
	int numFlag = 0;

	while (*(s + a) != '\0')
	{
		if (*(s + a) == '-')
		{
			sign *= (-1);
		}
		a++;
	}
	if (sign == -1)
	{
		_putchar('-');
	}
	a = 0;
	while (*(s + a) != '\0')
	{
		if (*(s + a) >= '0' && *(s + a) <= '9')
		{
			_putchar(*(s + a));
			numFlag = 1;
		}
		a++;
	}
	if (numFlag != 1)
	{
		return (0);
	}
	else
	{
		return (5);
	}
}
