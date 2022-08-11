#include "lists.h"

/**
 * recursor_print_list - keep track of count of nodes while
 * printing a singly linked list
 * @c: current node being printed
 * @node_count: count of nodes
 *
 * Desctiption: Only increase the node count if the current node
 * isn't a NULL pointer. Otherwise, only print if need be from the
 * node values then check if the next node is a NULL
 * in case we find a NULL node in the next, we end the recursion
 * early. Otherwise we continue the recursion with an increased number of nodes
 *
 * Return: number of nodes in our linked list
 */
size_t recursor_print_list(const list_t *c, int node_count)
{
	if (c != NULL)
	{
		node_count++;
	}
	else
	{
		return (node_count);
	}
	
	if (c->str != NULL)
	{
		printf("[%u] %s\n", c->len, c->str);
	}
	else
	{
		printf("[0] (nil)\n");
	}
	if (c->next == NULL)
	{
		return (node_count);
	}
	return (recursor_print_list(c->next, node_count));
}

/**
 * print_list - print all element of a list
 * @h: head node (pointer to the first element in the list)
 *
 * Return: number of nodes
 * Description: if it's NULL, print "[0] (nil)"
 */
size_t print_list(const list_t *h)
{
	int node_count = 0;

	return (recursor_print_list(h, node_count));
}
