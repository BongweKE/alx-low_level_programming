#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a
 * dlistint_t list
 * @h: the head node of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	size_t i;

	current = malloc(sizeof(dlistint_t *));
	current = (dlistint_t *)h;

	i = 0;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	free(current);

	return (i);
}
