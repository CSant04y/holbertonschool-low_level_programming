B#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserting a node at the index provided.
 * @h: head of linke dlist
 * @idx: this is the index they gave us
 * @n: this si the data that is to be inserted
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int itr = 0;

	current = *h;
	if (!h)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx > dlistint_len(current) + 1)
	{
		free(new);
		return (NULL);
	}

	while (h && itr < idx)
	{
		current = current->next;
		itr++;
	}
	if (idx == 0)
	{
		new->next = current;
		new->prev = *h;
		*h = new;
	}
	new->next = current->next;
	current->next = new;
	new->prev = current;
	free(new);
	return (new);
}

/**
 * dlistint_len - This gets the lenght of a doubly linked list
 * @h: This is the head of the linked list being passed in
 * Return: is the count
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		++count;
	}
	return (count);
}
