#include "lists.h"

/**
 * print_list - writes list_t h to SO
 * @h: h sll
 * Return: nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t nodeNum = 0;

	while (h)
	{
		if (!(h->str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		nodeNum++;
		h = h->next;
	}
	return (nodeNum);
}
