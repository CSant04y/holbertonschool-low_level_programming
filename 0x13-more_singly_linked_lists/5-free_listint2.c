#include "lists.h"
/**
 * free_listint2 - this frees a linked list
 * @head: this is a double pointer to head
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *tmp;

	*tmp = *head;
	while (tmp != NULL)
	{
		node = tmp->next;/*Setting node equal to pointer to next element*/
		free(tmp);
		tmp = node;
	}
	*head = NULL;
}
