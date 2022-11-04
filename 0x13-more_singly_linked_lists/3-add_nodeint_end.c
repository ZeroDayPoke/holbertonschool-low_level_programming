#include "lists.h"

/**
 * add_nodeint_end - function that adds new intnode to end of sll
 * @head: sll HEAD pointer
 * @n: int mem val of new intnode
 * Return: NULL on bad magic else add of new intnode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));
	if (!(newNode))
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head)
	{
		lastNode = *head;
		while (lastNode->next)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	else
	{
		*head = newNode;
	}
	return (newNode);
}
