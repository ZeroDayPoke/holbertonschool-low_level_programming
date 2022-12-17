#include "main.h"

/**
 * str_to_long - converts str to long
 * @str: string in question
 * Return: converted str or 0 if not compat
*/
long str_to_long(char *str)
{
	long result = 0, negNum, i;

	if (str[0] == '\0')
	{
		return (0);
	}
	negNum = 0;
	if (str[0] == '-')
	{
		negNum = 1;
		str++;
	}
	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		if (result > (LONG_MAX - (str[i] - '0')) / 10)
			return (0);
		result = result * 10 + (str[i] - '0');
	}
	return (negNum ? -result : result);
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
 * print_number - puts long to SO
 * @n: input number
 * Return: void
 */
void print_number(long n)
{
	long i, j, sign = 0, orgN, digC = 1;

	if (n >= 0)
	{
		n *= -1;
		sign = 1;
	}
	orgN = n;
	for (i = 0; (n / 10); i++)
	{
		n /= 10;
	}
	j = i;
	for (; i > 0; i--)
	{
		digC *= 10;
	}
	if (sign != 1)
	{
		_putchar('-');
		_putchar(-(orgN / digC) + '0');
		orgN -= (digC * (orgN / digC));
		digC /= 10;
		j--;
	}
	orgN *= -1;
	for (; j >= 0; j--)
	{
		_putchar((orgN / digC) + '0');
		orgN -= (digC * (orgN / digC));
		digC /= 10;
	}
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of strings passed in
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	long num1, num2, result;

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
	num1 = str_to_long(argv[1]);
	num2 = str_to_long(argv[2]);
	result = (num1 * num2);
	print_number(result);
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}
