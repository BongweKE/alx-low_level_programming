#include "main.h"

/**
 * create_array - use malloc to create an array and fill it with
 * a given value
 * @size: the size of the array
 * @c: Constant char to fill the array with
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size < 1)
	{
		(void)i;
		(void)a;
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		printf("Can't allocate %ld bytes", size * sizeof(char));
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
