#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash_table_t ht
 * @ht: htable to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *scrubber, *loader;

	if (!(ht))
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		loader = ht->array[i];
		while (loader != NULL)
		{
			scrubber = loader;
			loader = scrubber->next;
			free(scrubber->value);
			free(scrubber->key);
			free(scrubber);
		}
	}
	free(ht->array);
	free(ht);
}
