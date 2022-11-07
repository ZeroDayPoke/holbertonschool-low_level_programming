#include "main.h"

/**
 * main - check the code
 * @argc: total arguments supplied to cp
 * @argv: pointer to array of argv strs supplied to cp
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *buff;
	int openRetVal1 = 0, openRetVal2 = 0, writeRetVal = 0,
	readRetVal = 0, closeVal1 = 0, closeVal2 = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = malloc(1024);
	if (!(buff))
	{
		exit(EXIT_FAILURE);
	}
	openRetVal1 = open(argv[1], O_RDONLY);
	readRetVal = read(openRetVal1, buff, 1024);
	if (readRetVal < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buff);
		exit(98);
	}
	openRetVal2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	writeRetVal = write(openRetVal2, buff, readRetVal);
	if (writeRetVal < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}
	readRetVal = read(openRetVal1, buff, 1024);
	openRetVal2 = open(argv[2], O_WRONLY | O_APPEND);
	free(buff);
	closeVal1 = close(openRetVal1);
	closeVal2 = close(openRetVal2);
	if (closeVal1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", closeVal1);
		exit(100);
	}
	if (closeVal2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", closeVal2);
		exit(100);
	}
	return (0);
}
