#include "lists.h"
/**
 * print_list - this prints the linked list
 * @h: this is a pointer to the head of th the list
 * Return: is the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
