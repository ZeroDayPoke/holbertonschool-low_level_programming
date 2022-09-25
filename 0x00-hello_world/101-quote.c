#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: 'betty compliant example'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int stringLength = 0;
	char strArr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	stringLength = strlen(strArr);
	write(2, strArr, stringLength);
	return (1);
}
