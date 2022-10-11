#include <stdio.h>

/**
 * main - program that prints args passed to it
 * @argc: int num of inbound args
 * @argv: pointer to array of pointers w/ said args
 * Return: Always 0 (success)... hopefully
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc || argv)
	{
		/* MAKE BETTY HAPPY - NOT NECESSARY NOW */
	}
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
