#include "hash_tables.h"

/**
 * hash_table_delete - function to free and delete hash table
 * @ht: hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *tmp;
	unsigned long int itr = 0;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht->array);
		return;
	}
	for (itr = 0; itr < ht->size; itr++)
	{
		current = ht->array[itr];
		while (current != NULL)
		{
			tmp = current;
			current = current->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
