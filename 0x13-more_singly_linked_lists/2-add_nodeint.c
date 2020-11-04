#include "lists.h"
/**
 * *add_nodeint - This function adds a node to the beggining of a list
 * @head: this is a double pointer to the head element
 * @n: this is value that the node contains
 * Return: the return is address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = *head;
	*head = n_node;
	return (n_node);
}
