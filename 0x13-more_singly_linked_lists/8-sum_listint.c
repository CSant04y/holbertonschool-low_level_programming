#include "lists.h"
/**
 * sum_listint - this gets the sum of all the elements in the list
 * @head: this is the head of the list
 * Return: is sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
