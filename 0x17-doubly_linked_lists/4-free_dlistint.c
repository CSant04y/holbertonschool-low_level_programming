#include "lists.h"
/**
 * free_dlistint - This frees the list from a doubly linked list
 * @head: this it the head of the linked list
 * Return: is void so no return;
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
