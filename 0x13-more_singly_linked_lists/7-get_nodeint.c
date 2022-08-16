#include "lists.h"

/**
 * recursive_count - count nodes in a linked list using recursion
 * @c: current node
 * @node_count: count of nodes in our linked list
 *
 * Return: The number of nodes in our linked list
 */
size_t recursive_count(const listint_t *c, int node_count)
{
	if (c == NULL)
	{
		return (node_count);
	}
	else
	{
		node_count++;
	}

	if (c->next == NULL)
	{
		return (node_count);
	}
	return (recursive_count(c->next, node_count));
}

/**
 * listint_len - call a recursive function to compute the
 * length of our recursive function
 * @h: the address of out head node
 *
 * Return: length of the linked list
 */
size_t listint_len(const listint_t *h)
{
	int node_count = 0;

	return (recursive_count(h, node_count));
}

/**
 * get_nodeint_at_index - get the node at a given
 * index. Our indexes start from 0
 * @head: the first node of our linked list
 * @index: the node we wanna find
 *
 * Return: given node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, node_count = (unsigned int)
		listint_len((const listint_t *)head);
	listint_t *current;

	node_count -= 1; /* due to starting with 0 */

	/* check to see if it exists */
	if (head == NULL || index > node_count)
	{
		return (NULL);
	}

	/**
	 * now we know that the node exists so
	 * we will start at index zero and then just before
	 * the current node is that, we find it then exit the
	 * loop. This leaves our current as what we are looking for
	 */
	i = 0;
	current = head;
	while (i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
