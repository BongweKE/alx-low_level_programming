#include "lists.h"

/**
 * recursive_add_list - add all values of a linked list recursively
 * @c: current node to get data from
 * @sum: keep track of sum
 *
 * Description: only add to sum if the current node isn't
 * NULL. Otherwise check if the next node is null in which case this would
 * be the end of the recursion. If the pointer to next node isn'n a null,
 * we continue the recursion with an increased sum
 *
 * Return: sum of nodes in the linked list.
 */
int recursive_add_list(const listint_t *c, int sum)
{
	if (c == NULL)
	{
		return (0);
	}
	else
	{
		/* increase sum if our node isn't null */
		sum += c->n;
	}
	/**
	 * only continue with the recursion if the pointer
	 * to the next node isn't null
	 */
	if (c->next == NULL)
	{
		return (sum);
	}
	return (recursive_add_list(c->next, sum));
}

/**
 * sum_listint - call a recursive function to get sum
 * of all node values in our singly linked list
 * @head: address of the first node
 *
 * Return: the sum of our singly linked list or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	return (recursive_add_list(head, sum));
}
