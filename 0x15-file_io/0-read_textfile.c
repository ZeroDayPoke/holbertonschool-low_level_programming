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

	if (!(filename))
	{
		return (0);
	}
	letsCopy = malloc(letters);
	if (!(letsCopy))
	{
		return (0);
	}
	return (write(STDOUT_FILENO, letsCopy, (read(open(filename, O_RDONLY), letsCopy, letters))));
}
