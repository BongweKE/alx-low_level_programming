#include "main.h"

/**
 * array_range - creates an array of intengers in a given range
 * @min: value to start from
 * @max: largest value
 *
 * Return: Pointer to address of the array or NULL if error
 */
int *array_range(int min, int max)
{
	int i, s, *p;

	if (min > max)
	{
		return (NULL);
	}
	s = (max - min) + 1;
	p = malloc(sizeof(int) * s);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	i = 0;
	while (i < s)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
