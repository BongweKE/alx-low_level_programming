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
	/* void to ensure we are not specific */
	void *s;

	s = malloc(b);
	/* malloc fail check */
	if (s == NULL)
	{
		free(s);
		exit(98);
	}
	/* no segf, go ahead */
	return (s);
}
