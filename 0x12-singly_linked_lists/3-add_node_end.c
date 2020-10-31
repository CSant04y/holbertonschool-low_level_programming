#include "lists.h"

/**
 * *add_node_end - this adds a node the the end of the list_t
 * @head: this is a pointer to the head of the linked list
 * @str: this is a string pointer.
 * Return: This returns the address of a new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *n_node;
	list_t *tail_n;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	while (str[count])
		count++;

	n_node->len = count;
	if (*head == NULL)
		*head = n_node;

	else
	{
	tail_n = *head;
	while (tail_n->next != NULL)
		tail_n = tail_n->next;
	tail_n->next = n_node;
	}

	return (n_node);
}
