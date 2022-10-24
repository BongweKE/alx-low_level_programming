#include "hash_tables.h"

/**
 * hash_table_set - a function to add/update an element to a given hash table
 * @ht: the hash map to add an element to
 * @key: A string to convert into an index
 * @value: value in the node that's gonna be added to the list
 *
 * Return: 1 if successful, 0 if None
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	char *val = (char *)value;
	hash_node_t *node, *current_node;

	if (ht == NULL || key == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t *));
	if (node == NULL)
		return (0);

	node->key = (char *)key;
	node->value = val;
	node->next = NULL;

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = node;
	}
	else
	{
		current_node = ht->array[idx];
		/* ensure that nodes with equal keys are treated well */
		if (strcmp(current_node->key, key) == 0)
		{
			current_node->value = val;
			free(node);
			return (1);
		}

		while (current_node->next != NULL)
		{
		/* ensure that nodes with equal keys are treated well */
			if (strcmp(current_node->key, key) == 0)
			{
				current_node->value = val;
				free(node);
				return (1);
			}
			current_node = current_node->next;
		}

		current_node->next = node;
	}

	if (ht->array[idx] == NULL)
		return (0);

	return (1);
}
