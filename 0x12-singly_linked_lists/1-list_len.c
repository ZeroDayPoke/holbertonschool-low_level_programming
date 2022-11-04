#include "lists.h"

/**
 * list_len - determines number of nodes in sll
 * @h: h sll
 * Return: nodes in h
 */
size_t list_len(const list_t *h)
{
	size_t nodeNum = 0;

	while (h)
	{
		nodeNum++;
		h = h->next;
	}
	return (nodeNum);
}
