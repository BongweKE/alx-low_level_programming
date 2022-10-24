#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	hash_node_t *current_node;
	unsigned long int hash;

	ht = hash_table_create(1024);
	hash_table_set(ht, "hetairas", "cool");
	hash_table_set(ht, "mentioner", "testing");
	hash_table_set(ht, "c", "fun");

	current_node = malloc(sizeof(hash_node_t *));
	hash = key_index((const unsigned char *)"mentioner", 1024);
	printf("%lu\n", hash);
	current_node = ht->array[hash];

	if (current_node == NULL)
		printf("NULL\n");
	else
	{
		if (current_node->next != NULL)
		{
			while (current_node->next != NULL)
				current_node = current_node->next;

		}
		printf("%s\n", current_node->value);
	}

	return (EXIT_SUCCESS);
}
