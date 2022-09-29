#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: the first node
 *
 * Methodology:
 * Have two standby node: current and temp
 * make temp == current->next then free current
 * then make current = temp and repeat until NULL is found
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		head = head->next;

		free(head->prev);
	}

	free(head);
	head = NULL;
}
