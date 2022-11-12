#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash_table_t ht
 * @ht: htable to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *scrubber;

	if (!(ht))
	{
		return;
	}
	else if (!(ht->array) || ht->size <= 0)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				scrubber = ht->array[i]->next;
				free(ht->array[i]->value);
				free(ht->array[i]->key);
				free(ht->array[i]);
				ht->array[i] = scrubber;
			}
			free(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
