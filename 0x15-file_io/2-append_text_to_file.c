#include "main.h"

/**
 * append_text_to_file - appends txt to file
 * @filename: pointer to file to appe
 * @text_content: text to appe to file
 * Return: 1 if gucci -1 if sadge
 */
int append_text_to_file(const char *filename, char *text_content)
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
	oNum = open(filename, O_WRONLY | O_APPEND);
	write(oNum, text_content, txtLen);
	close(oNum);
	return (1);
}
