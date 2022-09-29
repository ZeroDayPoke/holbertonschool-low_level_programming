#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "UWU Test String";
    char *f = NULL;
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
