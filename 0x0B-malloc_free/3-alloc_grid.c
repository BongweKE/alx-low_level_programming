#include "main.h"

/**
 * alloc_grid - allocate memory to a 2d matrix
 * @width: the width of the matrix
 * @height: the number of sub-arrays within the matrix
 *
 * Return: pointer to location of our 2d matrix
 */
int **alloc_grid(int width, int height)
{
	int i, j, **p, *a;

	/* improbable width or height */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}	/* somehow that + 2 * sizeof(int) is needed idk y*/
	a = malloc(width * sizeof(int));
	p = malloc((height * sizeof(a)) + (sizeof(int) * 2));
	free(a);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		p[i] = malloc(width * sizeof(int));
		j = 0;
		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
		i++;
	}
	return (p);
}
