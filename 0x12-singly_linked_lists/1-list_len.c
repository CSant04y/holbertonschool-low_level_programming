#include "lists.h"
/**
 * list_len - this function returns the number of items in a linked list
 * @h: this is a pointer to the head of the list
 * Return: is the number of items in the list
 */

size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
