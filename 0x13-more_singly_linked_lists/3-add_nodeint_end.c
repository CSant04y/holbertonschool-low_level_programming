#include "lists.h"
/**
 * *add_nodeint_end - this adds a node to the end of a list
 * @head: this is a double pointer to the first element of a list
 * @n: this the value the node will contain
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *e_node, *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
		*head = n_node;
	else
	{
		e_node = *head;
		while (e_node->next != NULL)
			e_node = e_node->next;
		e_node->next = n_node;
	}
	return (n_node);
}
