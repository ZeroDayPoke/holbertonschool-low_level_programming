#include "main.h"

/**
 * binary_to_uint - converts binary str to uint
 * @b: inbound binary char *arg
 * Return: converted int or 0 on erroneous b str
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uwUint = 0, digC = 0;
	int binLen;

	if (!(b))
	{
		return (0);
	}
	for (binLen = 0; b[binLen]; binLen++)
	{
		if (b[binLen] != '0' && b[binLen] != '1')
		{
			return (0);
		}
	}
	binLen--;
	for (; binLen >= 0; binLen--)
	{
		if (b[binLen] == '1')
		{
			uwUint += 1 << digC;
		}
		digC++;
	}
	return (uwUint);
}
