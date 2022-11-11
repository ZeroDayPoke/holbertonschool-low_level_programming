#include "hash_tables.h"

/**
 * hash_table_get - function that returns value assc w key in ht
 * @ht: htable to get value from
 * @key: key associated w value in table
 * Return: value associated w key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hashKey, idx, i;

	if (!(ht) || !(key) || (!(key[0])))
	{
		return (NULL);
	}
	hashKey = hash_djb2((const unsigned char *)key);
	idx = hashKey % ht->size;
	/* cycle thru array and check for key */
	for (i = idx; ht->array[i]; i++)
	{
		if (!(strcmp(key, ht->array[i]->key)))
		{
			return (ht->array[i]->value);
		}
	}
	/* at this point the array has been cycled thru so... */
	return (NULL);
}
