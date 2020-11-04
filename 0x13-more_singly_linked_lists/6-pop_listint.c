#include "lists.h"
/**
 * pop_listint - this function deleted the head of a linkedlist
 * @head: this is pointer to the head of the list
 * Return: 0 if head is null
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int j = tmp->n;

	if (tmp != NULL)
	{
		*head = tmp->next;
		free(tmp);
	}
	return (j);
}
