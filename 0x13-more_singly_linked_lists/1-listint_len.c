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
