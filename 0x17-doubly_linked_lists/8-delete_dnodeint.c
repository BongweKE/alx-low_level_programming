#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a
 * linked dlistint_t list.
 * @h: The head node
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	dlistint_t *current;

	current = (dlistint_t *)h;
	while (current != NULL)
	{
		current = current->next;
		n++;
	}

	free(current);
	return (n);
}

/**
 * get_dnodeint_at_index - a function that returns the nth node of
 * a dlistint_t linked list.
 * @head: the first node
 * @index: the index of the node, starting from 0
 *
 * Return: NULL or The node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t len;
	dlistint_t *current;
	unsigned int i;

	len = dlistint_len(head);
	if (len <= index)
	{
		return (NULL);
	}

	current = malloc(sizeof(dlistint_t *));
	current = head;
	i = 0;
	while (i != index)
	{
		current = current->next;
		i++;
	}
	return (current);
}

/**
 * delete_dnodeint_at_index - a function that deletes the node at index
 * of a dlistint_t linked list.
 * @head: first node
 * @index: the point where we want to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = get_dnodeint_at_index(*head, index);

	if (node == NULL)
	{
		return (-1);
	}

	if (node->prev != NULL && node->next != NULL)
	{
		node->next->prev = node->prev;
		node->prev->next = node->next;
	}

	if (index == 0 && node->prev == NULL && node->next != NULL)
	{
		node->next->prev = NULL;
		*head = node->next;
	}

	if (node->next == NULL && node->prev != NULL)
		node->prev->next = NULL;

	free(node);
	node = NULL;

	return (1);
}
