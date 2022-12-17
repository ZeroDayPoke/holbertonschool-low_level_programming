#include "holberton.h"

/**
 * infinite add - adds redonk large nums
 * @n1: first number (str form)
 * @n2: second number (str form)
 * @r: buffer
 * @size_r: buffer size
 * Return: result (str form)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = 0, j = 0, k, carry = 0;

	k = size_r;
	while (n1[i])
		i++;
	while (n2[j])
		j++;
	i--;
	j--;
    while (i >= 0 || j >= 0 || carry > 0)
    {
        int sum = carry;
        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';
        r[k] = (sum % 10) + '0';
        carry = sum / 10;
        i--;
        j--;
        k--;
    }
    if (k <= 0)
        return (0);
    return (r + k + 1);
}
