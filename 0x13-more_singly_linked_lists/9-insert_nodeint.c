#include "lists.h"

/**
 * add_nodeint - add a node to the start of our linked list
 * @head: the current first node
 * @n: the value to be added to the new node created
 *
 * Return: the address of the new head or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
	{
		free(new_head);
		return (NULL);
	}
	new_head->n = n;
	new_head->next = *head;

	if (head == NULL)
	{
		head = malloc(sizeof(listint_t));
		if (head == NULL)
		{
			return (NULL);
		}
	}
	*head = new_head;
	return (*head);
}

/**
 * new_listint_len - count nodes in a linked list using recursion
 * @c: current node
 * @node_count: count of nodes in our linked list
 *
 * Return: The number of nodes in our linked list
 */
size_t new_listint_len(const listint_t *c, int node_count)
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
	return (new_listint_len(c->next, node_count));
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
		new_listint_len((const listint_t *)head, 0);
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

/**
 * insert_nodeint_at_index - insert a node at a given index in the list
 * @head: pointer to the first node in our linked list
 * @idx: index in the list where the new node should be inserted
 * @n: value of the new node
 *
 * Return: address of new node or NULL
 * Description: first check to see if it's possible
 * LOGIC if we have three items,
 * we can only insert at position 1 which is less than count - 1
 * this leaves us with two edge cases:
 * idx = 0 and insert at the end
 * after consideration, it's possible that inserting at the end naturally
 * gives us NULL value by inheriting current->next
 * this means that we can just dweet without idx >= count - 1 and
 * instead only check for idx >= count for NULL exits
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_node;
	unsigned int node_count = (unsigned int)
		new_listint_len((const listint_t *)*head, 0);

	if (*head == NULL || idx >= node_count)
	{
		return (NULL);
	}
	/* if we want to add at the start */
	if (idx == 0)
	{
		return (add_nodeint(head, n));
	}

	/* get the node before the given index */
	current = get_nodeint_at_index(*head, idx - 1);
	/* stop early if it isn't possible */
	if (current == NULL)
	{
		return (NULL);
	}

	/* create and insert if it's possible */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		printf("Malloc Error!\n");
		free(new_node);
		return (NULL);
	}
	/* first point to the current next node */
	new_node->n = n;
	/* is it possible it naturally inherits NULL*/
	new_node->next = current->next;

	/* then intercept the current next */
	current->next = new_node;
	return (new_node);
}
