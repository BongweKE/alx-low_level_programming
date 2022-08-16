#include "lists.h"

/**
 * pop_listint - delete the first node and return it's data
 * Description: if we have an empty list, return 0
 * @head: the first node
 *
 * Return: data on the head or 0
 */
int pop_listint(listint_t **head)
{
	int d; /* hold data before freeing */
	listint_t *temp;

	if (*head != NULL)
	{
		d = head[0]->n;
		temp = head[0]->next;
		free(*head);
		*head = temp;
		return (d);
	}
	return (0);
}
