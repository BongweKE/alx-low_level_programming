#ifndef LISTS_H
#define LISTS_H

#include <stdio.h> /* printf */
#include <stdlib.h> /* for malloc */
#include <string.h> /* for strdup */

/**
 * struct list_s - singly linked list
 * @str: string using malloc
 * @len: length of our string
 * @next: what our node points to
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

#endif /* LISTS_H */
