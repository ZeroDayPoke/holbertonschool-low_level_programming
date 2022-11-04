#include "lists.h"

/**
 * free_list - function that drakkaris the sll
 * @head: sll that bout to go byebye
 * Return: vel'koz type
 */
void free_list(list_t *head)
{
	list_t *targetCycler;

	while (head)
	{
		targetCycler = head->next;
		free(head->str);
		free(head);
		head = targetCycler;
	}
}
