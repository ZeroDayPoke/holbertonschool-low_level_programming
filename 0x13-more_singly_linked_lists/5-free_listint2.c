#include "lists.h"

/**
 * free_listint2 - deploys self destructing vel'koz on sll
 * @head: sll HEAD pointer
 * Return: vel'koz
 */
void free_listint2(listint_t **head)
{
	listint_t *targetCycler;

	if (!(head))
	{
		return;
	}
	while (*head)
	{
		targetCycler = (*head)->next;
		free(*head);
		*head = targetCycler;
	}
	head = NULL;
}
