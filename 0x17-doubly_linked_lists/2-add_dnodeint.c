BB#include "lists.h"
/**
 * add_dnodeint - This adds a node to the front of the linked list
 * @head: this is a double pointer that is the head
 * @n: this is the data that needs to be inserted in the linked list
 * Return: On success return the address of the new element and NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint_t));

	if (!n_node)
		return (NULL);
	n_node->n = n;
	n_node->next = *head;
	n_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = n_node;
	*head = n_node;

	return (n_node);
}
