#include "lists.h"
/**
 * free_list - this frees the memory in the list
 * @head: is a pointer to head of the list
 * Return: the return is void
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
	head = NULL;
}
