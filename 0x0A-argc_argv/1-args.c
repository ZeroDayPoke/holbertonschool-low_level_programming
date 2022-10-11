#include <stdio.h>

/**
 * main - program that prints number of args passed in
 * @argc: int num of inbound args
 * @argv: pointer to array of pointers w/ said args
 * Return: Always 0 (success)... hopefully
 */
int main(int argc, char *argv[])
{
	if (argc || argv)
	{
		/* MAKE BETTY HAPPY */
	}
	printf("%d\n", (argc - 1));
	return (0);
}
