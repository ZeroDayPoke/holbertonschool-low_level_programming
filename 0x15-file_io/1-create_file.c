#include "main.h"

/**
 * create_file - creates file and writes text into...
 * @filename: filename to create...
 * @text_content: text to write to file...
 * Return: 1 if gucci -1 if sadge
 */
int create_file(const char *filename, char *text_content)
{
	int txtLen = 0, oNum;

	if (!(filename))
	{
		return (-1);
	}
	while (text_content[txtLen])
	{
		txtLen++;
	}
	oNum = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0700);
	write(oNum, text_content, txtLen);
	close(oNum);
	return (1);
}
