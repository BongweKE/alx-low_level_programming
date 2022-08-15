#include "lists.h"

/**
 * create_first_node - used for the creation of the first node
 * @head: pointer to the first node int the singly linked list of numbers
 * @n: value used to populate the linked list
 *
 * Return: address of the new first node or NULL
 */
listint_t *create_first_node(listint_t *head, const int n)
{
	listint_t *first;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
	{
		return (NULL);
	}

	first->n = n;
	first->next = NULL;

	head = first;
	return (head);
}

/**
 * find_tail - find the tail node in a singly linked list
 * @c: the current node which is initially the head node
 *
 * Return: Address of the tail node of the linked list
 * or NULL
 */
listint_t *find_tail(const listint_t *c)
{
	if (c == NULL)
	{
		printf("Major code fail!\n");
		return (NULL);
	}

	if (c->next == NULL)
	{
		return ((listint_t *)c);
	}

	return (find_tail(c->next));
}


/**
 * add_nodeint_end - a function to add a node at the tail of a singly
 * linked list
 * @head: the address of the first node of the linked list
 * @n: value used in the newly created node
 *
 * Return: address of the newly added node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail, *current_tail;

	new_tail = malloc(sizeof(listint_t));
	if (new_tail == NULL)
	{
		free(new_tail);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = create_first_node(*head, n);
		free(new_tail);
		return (*head);
	}

	new_tail->n = n;
	new_tail->next = NULL;

	current_tail = find_tail(*head);
	current_tail->next = new_tail;

	return (new_tail);
}
