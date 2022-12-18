#include "lists.h"

/**
 * reverse_listint - reverses listint_t SLL
 * @head: sll HEAD pointer
 * Return: pointer to first node of revd list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
