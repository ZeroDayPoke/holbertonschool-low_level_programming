#include <stdio.h>

/**
 * _atoi - prints signed num from string input to SO
 * @s: input string
 * Return: 0 if no numbers present
 */
int _atoi(char *s)
{
	int a = 0;
	int sign = -1;
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
			retThis -= (*(s + a) - 48);
			numFlag = 1;
		}
		else if (numFlag == 1)
		{
			break;
		}
		a++;
	}
	retThis = (retThis * sign);
	return (retThis);
}

/**
 * main - program that erroneously gives away coins worth more than face value
 * @argc: int num of inbound args
 * @argv: pointer to array of pointers w/ said args
 * Return: 1 if shenaniganz else 0
 */
int main(int argc, char *argv[])
{
	int coinCount = 0, centz;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	centz = _atoi(argv[1]);
	if (centz < 0)
	{
		printf("0\n");
		return (505);
	}
	while (centz >= 25)
	{
		centz -= 25;
		coinCount++;
	}
	while (centz >= 10)
	{
		centz -= 10;
		coinCount++;
	}
	while (centz >= 5)
	{
		centz -= 5;
		coinCount++;
	}
	while (centz >= 2)
	{
		centz -= 2;
		coinCount++;
	}
	while (centz >= 1)
	{
		centz -= 1;
		coinCount++;
	}
	printf("%d\n", coinCount);
	return (0);
}
