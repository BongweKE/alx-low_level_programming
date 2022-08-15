#include "lists.h"

/**
 * recursive_print_list - print values of a linked list recursively
 * @c: current node to print
 * @node_count: keep track of current_node
 *
 * Description: only increase node count if the current node isn't
 * NULL. Otherwise, only print if need be (node isn't null)
 * we then check if the next node is null in which case this would
 * be the end of the recursion. If the pointer to next node isn'n a null,
 * we continue the recursion with an increased node_count
 *
 * Return: number of nodes in the linked list.
 */
size_t recursive_print_list(const listint_t *c, int node_count)
{
	if (c == NULL)
	{
		return (node_count);
	}
	else
	{
		/* increase node_count if our node isn't null */
		node_count++;
	}

	/* print it since it exists */
	printf("%i\n", c->n);
	/**
	 * only continue with the recursion if the pointer
	 * to the next node isn't null
	 */
	if (c->next == NULL)
	{
		return (node_count);
	}
	return (recursive_print_list(c->next, node_count));
}

/**
 * print_listint - print int values of a singly linked list
 * @h: the address of our head node.
 *
 * Return: the number of nodes in our linked list
 */
size_t print_listint(const listint_t *h)
{
	int node_count = 0;

	return (recursive_print_list(h, node_count));
}
