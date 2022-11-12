#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash_table_t ht
 * @ht: htable to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *scrubber1, *scrubber2;

	if (!(ht))
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			scrubber1 = ht->array[i];
			while (scrubber1)
			{
				scrubber2 = scrubber1->next;
				free(scrubber1->value);
				free(scrubber1->key);
				free(scrubber1);
				scrubber1 = scrubber2;
			}
			free(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
