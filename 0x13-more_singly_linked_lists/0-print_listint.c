#include "lists.h"
/**
 * print_listint - This prints each element of a node as well as
 * returning a count of the number of nodes
 * @h: this is a pointer to the head of the linked list
 * Return: a count of the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
