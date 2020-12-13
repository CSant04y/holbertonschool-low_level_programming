#include "lists.h"

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