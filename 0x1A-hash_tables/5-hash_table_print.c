#include "hash_tables.h"

/**
 * hash_table_print - function to print all key/value pairs in order
 * @ht: hash table
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int itr = 0, chk = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (itr = 0; itr < ht->size; itr++)
	{
		current = ht->array[itr];
		for (; current != NULL; current = current->next)
		{
			if (chk)
				printf(", ");
			printf("\'%s\': ", current->key);
			printf("\'%s\'", current->value);
			chk = 1;
		}
	}
	printf("}\n");
}
