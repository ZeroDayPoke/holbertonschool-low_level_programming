#include "lists.h"

/**
 * sum_listint - sum of listint sll node's ns
 * @head: sll HEAD pointer
 * Return: sum all dem ns
 */
int sum_listint(listint_t *head)
{
	int nSum = 0;

	while (head)
	{
		nSum += head->n;
		head = head->next;
	}
	return (nSum);
}
