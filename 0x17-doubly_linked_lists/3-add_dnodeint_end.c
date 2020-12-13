#include "lists.h"
/**
 * add_dnodeint_end - This adds a node to the end of a linked list
 * @head: this is the head of the list
 * @n: this is the data that is passed in the list
 * Return: is address of new Element if success and NULL for failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node, *last;

	n_node = malloc(sizeof(dlistint_t));
	if (!n_node)
		return (NULL);
	last = *head;
	n_node->n = n;
	n_node->next = NULL;

	if (!*head)
		*head = n_node;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = n_node;
		n_node->prev = last;
	}
	return (n_node);
}
