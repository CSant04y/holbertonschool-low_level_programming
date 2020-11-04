#include "lists.h"
/**
 * *get_nodeint_at_index - This gets the nth node in a list and returns it
 * @head: this is a pointer to the head of the list
 * @index: this is the index of the list
 * Return: is head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (idx < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		idx++;
	}
	return (head);
}
