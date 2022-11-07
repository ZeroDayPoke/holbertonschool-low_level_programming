#include "main.h"

/**
 * read_textfile - reads text writes to SO
 * @filename: pointer to file to op on
 * @letters: num of chars to read from file and write to SO
 * Return: number of chars read and written to SO or 0 on err
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *letsCopy;
	int checkOpen = 0, checkRead = 0, checkWrite = 0;

	if (!(filename))
	{
		return (0);
	}
	letsCopy = malloc(letters);
	if (!(letsCopy))
	{
		return (0);
	}
	checkOpen = open(filename, O_RDONLY);
	checkRead = read(checkOpen, letsCopy, letters);
	checkWrite = write(STDOUT_FILENO, letsCopy, checkRead);
	if (checkOpen < 0 || checkRead < 0 ||
	checkWrite < 0 || checkWrite != checkRead)
	{
		free(letsCopy);
		return (0);
	}
	free(letsCopy);
	close(checkOpen);
	return (checkWrite);
}
