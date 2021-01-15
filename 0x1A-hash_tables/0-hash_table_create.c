#include "hash_tables.h"
/**
 * hash_table_create - This Function creates a Hash table.
 * @size: This is the size of the array that we are passed
 * Return: Returning the pointer to the hashtable array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = NULL;

	hashTable = malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);

	hashTable->size = size;
	hashTable->array = calloc(size, sizeof(hash_node_t *));
	if (!hashTable->array)
		return (NULL);
	return (hashTable);
}
