#include "main.h"

/**
 *
 *
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
	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
