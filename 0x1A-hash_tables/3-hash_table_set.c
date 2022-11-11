#include "hash_tables.h"

/**
 * hash_table_set - function that adds ele to htable
 * @ht: htable to add kv to
 * @key: key to be added
 * @value: value paired w key
 * Return: 1 on success 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	unsigned long int hashKey, idx;

	if (!(ht) || !(key) || !(value))
	{
		return (0);
	}
	newNode = malloc(sizeof(hash_node_t));
	if (!(newNode))
	{
		return (0);
	}
	hashKey = hash_djb2((const unsigned char *)key);
	idx = hashKey % ht->size;
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[idx];
	return (1);
}
