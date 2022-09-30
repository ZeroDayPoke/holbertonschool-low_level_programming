#include "main.h"

/**
 * *_strstr - locates and points to substr if existing
 * @haystack: string to look thru
 * @needle: substring to locate
 * Return: point to substr or NULL if none found
 */
char *_strstr(char *haystack, char *needle)
{
	int i; /* declare arbitrary iterator */

	if (!needle[0]) /* catch empty needle */
	{
		return (haystack); /* return haystack if no comparison possible */
	}
	while (*haystack) /* cut haystack till it gets trapped in inner while */
	{
		i = 0; /* reset i from partial target match */
		while (haystack[i] == needle[i]) /* compare shredded haystack to needle */
		{
			if (!(needle[i + 1])) /* check if end of needle (inverse false is true) */
			{
				return (haystack); /* returns haystack shredded down to needle */
			}
			i++; /* target hit, but not at end of needle, check next char */
		}
		haystack++; /* if no target match knock out leading char */
	}
	return (haystack); /* equivalent to null char at this point */
}
