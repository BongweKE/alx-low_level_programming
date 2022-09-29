#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the
 * data (n) of a dlistint_t linked list.
 * @head: the first node
 *
 * Return: sum as above; if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	if (head == NULL)
	{
		sum = 0;
	}
	else
	{
		current = malloc(sizeof(dlistint_t *));
		if (current == NULL)
		{
			free(current);
			exit(EXIT_FAILURE);
		}

		current = head;
		sum = 0 + current->n;
		while (current->next != NULL)
		{
			current = current->next;
			sum += current->n;
		}

	}

	return (sum);
}
