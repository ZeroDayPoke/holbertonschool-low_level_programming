#include "main.h"

/**
 * *_strstr - locates and points to substr if existing
 * @haystack: string to look thru
 * @needle: substring to locate
 * Return: point to substr or NULL if none found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (!needle)
	{
		return (haystack);
	}
	while (*haystack)
	{
		i = 0;
		while (haystack[i] == needle[i])
		{
			if (!(needle[i + 1]))
			{
				return (haystack);
			}
			i++;
		}
		haystack++;
	}
	return (haystack);
}
