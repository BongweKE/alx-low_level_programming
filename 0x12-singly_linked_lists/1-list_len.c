#include "lists.h"

/**
 * recursor_list_len - keep track of count of nodes inside
 * a singly linked list
 * @c: current node being printed
 * @node_count: count of nodes
 *
 * Desctiption: Only increase the node count if the current node
 * isn't a NULL pointer.
 * in case we find a NULL node in the next, we end the recursion
 * early. Otherwise we continue the recursion with an increased number of nodes
 *
 * Return: number of nodes in our linked list
 */
size_t recursor_list_len(const list_t *c, int node_count)
{
	if (c != NULL)
	{
		node_count++;
	}
	else
	{
		return (node_count);
	}

	if (c->next == NULL)
	{
		return (node_count);
	}
	return (recursor_list_len(c->next, node_count));
}

/**
 * list_len - find number of nodes in a singly linked list
 * @h: head node (pointer to the first element in the list)
 *
 * Return: number of nodes
 * Description: use recursion to make it easier
 */
size_t list_len(const list_t *h)
{
	int node_count = 0;

	return (recursor_list_len(h, node_count));
}
