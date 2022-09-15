#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'betty compliant example'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intVarType;
	float floatVarType;
	long int longVarType;
	long long int longLongVarType;
	char charVarType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charVarType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intVarType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longVarType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongVarType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatVarType));

	return (0);
}
