#include "lists.h"
/**
 * delete_nodeint_at_index - this delets the node at the index postion
 * @head: pointer to head of list
 * @index: the node to delete
 * Return: 1 if success -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *current;

	if (*head == NULL || head == NULL)
		return (-1);
	if ((*head)->n == index)
	{
		tmp = *head;
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			if(current->next->data == key)
			{
				tmp = current->next;
				current->next = current->next->next;
				free(tmp);
				break;
			}
			else
				current = current->next;
		}
	}
	return (1);
}
