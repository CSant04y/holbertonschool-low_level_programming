#include "hash_tables.h"
/**
 * hash_table_get - This function retrives a value associated with a key
 * @ht: This is the hea
 * @key: This is they want us to check for
 *
 * Return: current->value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
	index = (hash_djb2((unsigned char *)key) % ht->size);

	for (current = ht->array[index]; current != NULL; current = current->next)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
	}
	return (NULL);
}
