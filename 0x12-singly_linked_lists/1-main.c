#include "lists.h"
#include <string.h>

/**
 * main - code checker
 *
 *Return: Zero
 *
 */
int main(void)
{
	list_t *head, *new, hello = {"World", 5, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}

	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;

	n = list_len(head);
	printf("-> %lu elements\n", n);
	free(new->str);
	free(new);
	return (0);
}
