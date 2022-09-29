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
