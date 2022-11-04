#include "lists.h"

/**
 * pop_listint - TKOs node 1 of sll and returns its n
 * @head: sll HEAD pointer
 * Return: HEAD's n or zed if empty sll
 */
int pop_listint(listint_t **head)
{
	listint_t *target;
	int node1nval;

	if (!(*head))
	{
		return (0);
	}
	target = *head;
	node1nval = (*head)->n;
	*head = (*head)->next;
	free(target);
	return (node1nval);
}
