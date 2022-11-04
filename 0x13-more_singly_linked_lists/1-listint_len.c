#include "lists.h"

/**
 * listint_len - function that dets num nodes in sll
 * @h: sll HEAD pointer
 * Return: number of nodes in sll
 */
size_t listint_len(const listint_t *h)
{
	size_t nodeNum = 0;

	while (h)
	{
		nodeNum++;
		h = h->next;
	}
	return (nodeNum);
}
