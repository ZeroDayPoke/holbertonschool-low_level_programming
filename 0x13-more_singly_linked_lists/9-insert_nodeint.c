#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new intnode into sll cont n at index
 * @head: sll HEAD pointer
 * @idx: sll node position to insert new node
 * @n: int n to be associated w/ new node
 * Return: add of new node or NULL on bad magic
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *oldsll;
	unsigned int nodeNum;

	oldsll = *head;
	newNode = malloc(sizeof(listint_t));
	if (!(newNode))
	{
		return (NULL);
	}
	newNode->n = n;
	if (!(idx))
	{
		newNode->next = oldsll;
		*head = newNode;
		return (newNode);
	}
	for (nodeNum = 0; nodeNum < (idx - 1); nodeNum++)
	{
		if (!(oldsll) || !(oldsll->next))
		{
			return (NULL);
		}
		oldsll = oldsll->next;
	}
	newNode->next = oldsll->next;
	oldsll->next = newNode;
	return (newNode);
}
