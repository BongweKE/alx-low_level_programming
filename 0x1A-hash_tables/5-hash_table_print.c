#include "hash_tables.h"

/**
 * print_Linked_Vals - A function to print out node values linked to a given
 * hash map index
 * @current_node: the first node in the given hash map index
 * @print_comma: a value to let us know whether or not to print a coma (',')
 */
void print_Linked_Vals(hash_node_t *current_node, int print_comma)
{
	while(current_node != NULL)
	{
		if (print_comma)
			printf(", ");
		printf("'%s' : '%s'",
		       current_node->key,
		       current_node->value);
		print_comma = 1;
		current_node = current_node->next;
	}
}


/**
 * hash_table_print - a function to print the whole hash map
 * @ht: pointer to a hash map
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int print_comma = 0;

	printf("{");
	if (ht != NULL)
	{
		while(i < ht->size)
		{
			if(ht->array[i] != NULL)
			{
				print_Linked_Vals(ht->array[i], print_comma);
				print_comma = 1;
			}
			i++;
		}
	}

	printf("}\n");
}

