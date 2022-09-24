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
	int retThis = 0;

	while (*(s + a) != '\0')
	{
		if (*(s + a) == '-')
		{
			sign *= -1;
		}
		else if (*(s + a) >= '0' && *(s + a) <= '9')
		{
			retThis *= 10;
			retThis += (*(s + a) - 48);
			numFlag = 1;
		}
		else if (numFlag == 1)
		{
			break;
		}
		a++;
	}
	return (sign * retThis);
}
