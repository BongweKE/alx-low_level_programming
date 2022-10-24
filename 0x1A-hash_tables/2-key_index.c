#include "hash_tables.h"

/**
 * key_index - convert given key to an index in a hash map
 * @key: A string to be used as key in hash map
 * @size: the number of buckets in our hash map
 *
 * Return: index where the node shoulb be stored
 */
unsigned long int key_index(const unsigned char *key,
			    unsigned long int size)
{
	return (hash_djb2(key) % size);
}
