#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: the current first node in the dlistint_t
 * @n: the new value to be stored in the dlistint_t
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* create it using malloc for it to be returned */
	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* populate the new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/* in case we are dealing with an empty linked list */
	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));

		if (head == NULL)
		{
			free(head);
			free(new_node);
			return (NULL);
		}

		*head = new_node;
		return (*head);
	}

	/* for subsequent cases */
	/* use this notation since we've already populated new_node*/
	new_node->next->prev = (dlistint_t *)new_node;
	*head = new_node;
	return (*head);
}
