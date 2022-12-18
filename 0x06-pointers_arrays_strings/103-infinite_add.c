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
    int i = 0, j = 0, k, carry = 0, sum;

	k = (size_r - 1);
	while (n1[i + 1])
		i++;
	while (n2[j + 1])
		j++;
	r[size_r] = '\0';
    while (i >= 0 || j >= 0 || carry > 0)
    {
        sum = carry;
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
    if (k < 0)
        return (0);
    return (r + k + 1);
}
