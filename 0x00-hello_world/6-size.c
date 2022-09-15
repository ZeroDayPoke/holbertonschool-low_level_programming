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
	long longVarType;
	long long longLongVarType;
	char charVarType;

	printf("Size of a char: %zu byte(s)\n", sizeof(intVarType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatVarType));
	printf("Size of double: %zu byte(s)\n", sizeof(longVarType));
	printf("Size of char: %zu byte(s)\n", sizeof(charVarType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongVarType));

	return (0);
}
