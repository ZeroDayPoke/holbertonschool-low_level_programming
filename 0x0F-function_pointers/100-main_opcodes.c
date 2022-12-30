#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect,
 * 2 if the number of bytes is negative
 */
int main(int argc, char** argv)
{
	int num_bytes, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
    }
	unsigned char* p = (unsigned char*) main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", p[i]);
	}
	printf("\n");
	return (0);
}
