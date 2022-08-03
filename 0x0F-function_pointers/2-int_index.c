#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: an array containing integers
 * @size: of the array
 * @cmp: function to compare integers to find what we're
 * searching for and return True (not 0)
 *
 * Return: index of the first matching element searched for
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	/* NULL checks */
	if (cmp == NULL || array == NULL)
	{
		exit(EXIT_FAILURE);
	}
	if (size <= 0)
	{
		return (-1);
	}

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	/* not found */
	return (-1);
}
