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
size_t recursor_list_len(const listint_t *c, int node_count)
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
size_t list_len(const listint_t *h)
{
	int node_count = 0;

	return (recursor_list_len(h, node_count));
}

/**
 * free_last_node - free the last node in our linked list
 * @node: current node to be checked if it's the last node
 * @node_count: number of nodes used to find the last node
 *
 * Return: new node count after freeing last node
 */
int free_last_node(listint_t *node, size_t node_count)
{
	if (node_count > 2)
	{
		if (node->next->next == NULL)
		{
			free(node->next);
			/* ensure this is now set to become tail */
			node->next = NULL;
			/* will be reduced by the loop that calls it */
			return (node_count);
		}
		else
		{
			return (free_last_node(node->next, node_count));
		}
	}
	else if (node_count == 2)
	{
		free(node->next);
		return (node_count);
	}
	else if (node_count == 1)
	{
		free(node);
		return (0);
	}
	return (node_count);
}

/**
 * free_listint - find node_count and call recursive functions to
 * free all nodes in our singly linked list
 * @head: the pointer to the first node in the linked list
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	size_t node_count = (int)list_len((const listint_t *)head);

	if (head == NULL)
	{
		return;
	}

	while (free_last_node(head, node_count) > 0)
	{
		node_count--;
	}

}

/**
 * free_listint2 - free linked list then set the head to NULL
 * @head: first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (*head != NULL)
	{
		free_listint(*head);
		*head = NULL;
	}
	else
	{
		printf("Freed!\n");
		exit(EXIT_FAILURE);
	}
}
