#include "lists.h"

/**
 * print_listint - writes sll node int mems to SO
 * @h: sll HEAD pointer
 * Return: number of nodes in sll
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeNum = 0;

	while (h)
	{
		nodeNum++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodeNum);
}
