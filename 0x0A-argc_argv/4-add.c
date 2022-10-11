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
 * main - program that adds numerous positive ints
 * @argc: int num of inbound args
 * @argv: pointer to array of pointers w/ said args
 * Return: Always 0 (success)... hopefully
 */
int main(int argc, char *argv[])
{
	int i, j, total = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		total += _atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
