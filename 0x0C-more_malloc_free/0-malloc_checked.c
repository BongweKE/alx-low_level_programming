#include "main.h"

/**
 * malloc_checked - allocate memory of a given space after
 * checking for segf errors
 * @b: the buffer size
 *
 * Return: pointer to address of allocated memory
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
	{
		exit(98);
	}
	return (malloc(b));
}
