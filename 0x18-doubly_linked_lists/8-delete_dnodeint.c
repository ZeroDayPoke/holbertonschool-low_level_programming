#include "lists.h"

/**
 * delete_dnoteint_at_index - removes node at index from dll
 * @head: pointer to first node in dll
 * @index: index num of node to delete
 * Return: 1 on success -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *targetCycler = *head;

	if (!(*head))
	{
		return (-1);
	}
	/* find node add at index */
	while (index)
	{
		if (!(targetCycler))
		{
			return (-1);
		}
		targetCycler = targetCycler->next;
		index--;
	}
	/* check if we're at the beginning of dll */
	if (*head == targetCycler)
	{
		*head = targetCycler->next;
	}
	/* if not then set prev next mem to next */
	else
	{
		targetCycler->prev->next = targetCycler->next;
	}
	free(targetCycler);
	return (1);
}