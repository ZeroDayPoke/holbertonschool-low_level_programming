#include "lists.h"

/**
 * free_listint - deploys vel'koz on sll
 * @head: sll HEAD pointer
 * Return: vel'koz
 */
void free_listint(listint_t *head)
{
	listint_t *targetCycler;

	while (head)
	{
		targetCycler = head->next;
		free(head);
		head = targetCycler;
	}
}
