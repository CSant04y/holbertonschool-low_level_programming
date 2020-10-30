#include "lists.h"

/**
 * *add_node - this adds a node the the begining of the list_t
 * @head: this is a pointer to the head of the linked list
 * @str: this is a string pointer.
 * Return: This returns the address of an element
 */
list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *n_node;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	while (str[count] != '\0')
		count++;

	n_node->len = count;
	n_node->next = *head;

	*head = n_node;

	return (n_node);
}
