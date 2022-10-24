#include "hash_tables.h"

/**
 * hash_table_get - a function to retrieve a value assoc with a key
 * @ht: the hash map
 * @key: string representation of a key we're looking for in our table
 *
 * Return: Value associated with the element or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned long int hash = key_index((const unsigned char *)key,
					   ht->size);

	if (ht->array[hash] != NULL)
	{
		current_node = ht->array[hash];
		if (current_node->next == NULL)
			return current_node->value;
		else
		{
			while (current_node != NULL)
			{
				if (strcmp(current_node->key, key) == 0)
					return (current_node->value);
				current_node = current_node->next;
			}
		}
	}

	return (NULL);
}
