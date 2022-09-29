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
 * insert_dnodeint_at_index - a function that inserts a new node at a
 * given position.
 * @h: the head node
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: value of new node to be added
 *
 * Return: the address of the new node, or NULL if it failed
 *
 * Description: if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current, *temp;
	size_t len;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	len = dlistint_len(*h);
	if (idx == len)
		return (add_dnodeint_end(h, n));

	if (idx > len)
		return (NULL);

	current = malloc(sizeof(dlistint_t *));
	new_node = malloc(sizeof(dlistint_t *));
	temp = malloc(sizeof(dlistint_t *));
	if (current == NULL || new_node == NULL || temp == NULL)
	{
		exit(EXIT_FAILURE);
	}

	current = get_dnodeint_at_index(*h, idx - 1);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = current;

	temp = current->next;
	current->next = new_node;
	new_node->next = temp;

	return (new_node);
}
