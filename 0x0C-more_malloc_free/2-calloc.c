#include "main.h"

/**
 * _calloc - allocate memory to an arrey of given number of elements
 * each of a given size
 * @nmemb: number of members
 * @size: given size of each member
 *
 * Return: Null or pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	c = malloc(nmemb * size);
	if (c == NULL)
	{
		return (NULL);
	}
	free(c);
	return (malloc(nmemb * size));
}
