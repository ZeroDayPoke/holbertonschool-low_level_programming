#include "lists.h"

/**
 * delete_nodeint_at_index - knock out target node at index
 * @head: sll HEAD pointer
 * @index: target node index pos
 * Return: 1 if success -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *target, *oldsll;
	unsigned int nodeNum;

	oldsll = *head;
	if (!(oldsll))
	{
		return (-1);
	}
	if (!(index))
	{
		*head = (*head)->next;
		free(oldsll);
		return (1);
	}
	for (nodeNum = 0; nodeNum < (index - 1); nodeNum++)
	{
		if (!(oldsll->next))
		{
			return (-1);
		}
		oldsll = oldsll->next;
	}
	target = oldsll->next;
	oldsll->next = target->next;
	free(target);
	return (1);
}
