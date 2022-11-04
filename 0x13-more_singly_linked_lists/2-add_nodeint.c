#include "lists.h"

/**
 * add_nodeint - function that adds new intnode to sll
 * @head: sll HEAD pointer
 * @n: int mem val of new intnode
 * Return: NULL on bad magic else add of new intnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!(newNode))
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
