#include "lists.h"
/**
 * listint_len - this find the length of a linked list
 * @h: this is a pointer to the head of the list
 * Return: is count
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
