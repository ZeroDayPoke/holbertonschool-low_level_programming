#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates and points to substr if existing
 * @haystack: string to look thru
 * @needle: substring to locate
 * Return: point to substr or NULL if none found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, hitCount, nedLen;

	while (needle[i])
	{
		i++;
	}
	nedLen = i;
	i = 0;
	while (haystack[j])
	{
		hitCount = 0;
		if (haystack[j] == needle[i])
		{
			for (i = 0; i < nedLen; i++)
			{
				if ((haystack[j + i] == needle[i]) && haystack[j + i] != '\0')
				{
					if ((hitCount + 1) == nedLen)
					{
						haystack += j;
						return (haystack);
					}
					hitCount++;
				}
			}
		}
		j++;
	}
	return (NULL);
}
