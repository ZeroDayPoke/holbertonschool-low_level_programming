#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints SLL listint_t list
 * @head: sll HEAD pointer
 * Return: num of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;

	current = head;
	while (current)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		if (current <= head)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}
	return (count);
}
