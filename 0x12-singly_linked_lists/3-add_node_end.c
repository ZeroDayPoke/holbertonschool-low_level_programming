#include "lists.h"

/**
 * *_strcpy - cpy chrArr from src to dest
 * @src: source of chararr
 * @dest: destination of cpd chararr
 * Return: dest charArr add
 */
char *_strcpy(char *dest, const char *src)
{
	int a = 0;

	while (*(src + a))
	{
		*(dest + a) = *(src + a);
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * add_node_end - adds new node to end of sll
 * @head: pointer to HEAD of sll
 * @str: new charArr to be added to sll
 * Return: NULL if bad magic else add of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *lastNode;
	unsigned int strLen;
	char *charArr;

	newNode = malloc(sizeof(list_t));
	if (!(newNode))
	{
		return (NULL);
	}
	strLen = strlen(str);
	charArr = malloc(strlen(str));
	if (!(charArr))
	{
		free(newNode);
		return (NULL);
	}
	_strcpy(charArr, str);
	newNode->str = charArr;
	newNode->len = strLen;
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
