#include "lists.h"
/**
 * free_listint - this frees the linked list safetly
 * @head: this is a pointer to the first element in a list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	head = NULL;
}
