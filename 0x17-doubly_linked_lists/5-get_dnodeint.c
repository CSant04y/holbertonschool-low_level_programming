#include "lists.h"
/**
 * get_dnodeint_at_index - This gets the node as the index provided
 * @head: this is the head of the linked list being passed in.
 * @index: this is the index
 * Return: NULL if does not exists
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int itr = 0;

	if (!tmp)
		return (NULL);
	while (tmp && itr < index)
	{
		tmp = tmp->next;
		++itr;
	}
	return (tmp);
}
