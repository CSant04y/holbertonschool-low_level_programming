#include "hash_tables.h"
/**
 * hash_table_set - This Function adds element to list
 * @ht: the hash table you want to add or update the key/value
 * @key:is the key
 * @value: is value associated with the key
 * Return: 1 for success 0 for otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *current = NULL;
	char *key_dup = NULL, *value_dup = NULL;
	unsigned long int idx_value = 0;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);

	key_dup = strdup(key);
	value_dup = strdup(value);
	if (key_dup == NULL || value_dup == NULL)
	{
		free(key_dup);
		free(value_dup);
		return (0);
	}
	new_node = init_node(key_dup, value_dup);
	if (new_node == NULL)
	{
		free_func(new_node, key_dup, value_dup);
		return (0);
	}
	idx_value = key_index((unsigned char *)key_dup, ht->size);

	for (current = ht->array[idx_value]; current != NULL; current = current->next)
	{
		if (!(strcmp(new_node->key, current->key)))
		{
			free(current->value);
			current->value = value_dup;
			free(new_node);
			free(key_dup);
			return (1);
		}
	}
	new_node->next = ht->array[idx_value];
	ht->array[idx_value] = new_node;

	return (0);
}
/**
 * init_node - This function initilizes the node with a key and value in LL
 * @key_dup: Duplicate of Key
 * @value_dup: Duplicate of Value
 * Return: The new initilized node back to the main function
 */
hash_node_t *init_node(char *key_dup, char *value_dup)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t *));
	if (new_node == NULL)
		return (NULL);

	new_node->key = key_dup;
	new_node->value = value_dup;
	new_node->next = NULL;
	return (new_node);
}
/**
 * free_func - Frees stringss that are duplicates
 * @new_node: pointer to new node created in the linked list
 * @key: pointer to duplicated key string
 * @value: pointer to duplicated value string
 * freed before exit failure or if value being replaced
 * Return: Nothing
 */

void free_func(hash_node_t *new_node, char *key, char *value)
{
	free(new_node);
	free(key);
	free(value);
}
