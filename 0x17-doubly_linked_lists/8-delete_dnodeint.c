#include "lists.h"
/**
 * delete_dnodeint_at_index - This deletes a node at index
 * @head: head of linked list
 * @index: ined at which they want us to delete node
 * Return: is -1 on failure and 1 on success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *tmp;

	if (head == NULL)
		return (-1);
	while (current != NULL)
	{
		if (index == 1)
		{
			tmp = current->next;
			if (!tmp)
				return (-1);
			break;
		}
		current = current->next;
		--index;
	}

	if (current->next != NULL)
		current->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
