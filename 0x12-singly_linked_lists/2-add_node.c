#include "lists.h"


/**
 * _strlen - count the length of a string
 * @s: the string that we want to know the length of
 *
 * Return: The length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{

		i++;
	}
	return (i);
}

/**
 * add_node - add a new node at the beginning of a
 * singly linked list
 * @head: address of the current first node in the
 * singly linked list
 * @str: string value to be used in the new node
 *
 * Return: address of new node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	list_t *new_head;

	new_head = malloc(sizeof(list_t));

	s = strdup((char *)str);
	if (new_head == NULL || s == NULL) /* check strdup and malloc */
	{
		free(new_head);
		return (NULL);
	}
	new_head->str = s;
	new_head->len = _strlen(s);
	new_head->next = *head;

	if (head == NULL)
	{
		/* printf("Still NIL\n"); */
		head = malloc(sizeof(list_t));
	}

	if (head == NULL)
	{
		printf("Major Alert!\n");
		return (NULL);
	}

	*head = new_head;

	return (*head);
}
