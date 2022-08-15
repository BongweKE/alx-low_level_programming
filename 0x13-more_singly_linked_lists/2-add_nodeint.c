#include "lists.h"

/**
 * add_nodeint - add a node to the start of our linked list
 * @head: the current first node
 * @n: the value to be added to the new node created
 *
 * Return: the address of the new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
	{
		free(new_head);
		return (NULL);
	}
	new_head->n = n;
	new_head->next = *head;

	if (head == NULL)
	{
		head = malloc(sizeof(listint_t));
		if (head == NULL)
		{
			return (NULL);
		}
	}
	*head = new_head;
	return (*head);
}
