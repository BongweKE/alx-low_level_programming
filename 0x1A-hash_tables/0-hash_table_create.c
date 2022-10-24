#include "hash_tables.h"

/**
 * hash_table_create - A function to create a hash map
 * @size: the number of buckets in the hash map
 *
 * Return: pointer to the new map or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_map = malloc(sizeof(hash_table_t));
	if (new_map == NULL)
		return (NULL);

	new_map->size = size;
	new_map->array = malloc(sizeof(hash_node_t *) * size);
	if (new_map->array == NULL)
		return (NULL);

	return new_map;
}
