#include "lists.h"

/**
 * print_dlistint_backward - prints dll node int ns in rev order
 * @h: pointer to first node in dll
 * Return: total number of nodes in dll
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t nodeNum = 0, nodeTotal;

	/* cycles thru dll till last node add */
	while (h->next)
	{
		h = h->next;
		nodeNum++;
	}
	/* set the node total then print ns backward */
	nodeTotal = nodeNum;
	for (; nodeNum > 0; nodeNum--)
	{
		printf("%d\n", h->n);
		h = h->prev;
	}
	/* print first node then add to total */
	printf("%d\n", h->n);
	nodeTotal++;
	return (nodeTotal);
}
