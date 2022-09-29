#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a dlistint_t list.
 * @head: The first node
 * @n: the value to use int the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new_node;

	/* first in case we have to create a new one */
	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head == NULL)
		{
			free(head);
			return (NULL);
		}
		/* because of ** this is a must */
		head[0]->n = n;
		head[0]->prev = NULL;
		head[0]->next = NULL;
		return (*head);
	}

	/* here we have to add at the end */
	current = malloc(sizeof(dlistint_t *));
	new_node = malloc(sizeof(dlistint_t *));
	if (current == NULL || new_node == NULL)
	{
		free(current);
		free(new_node);
		return (NULL);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	new_node->n = n;
	new_node->prev = current;
	new_node->next = NULL;

	current->next = new_node;
	return (new_node);
}
