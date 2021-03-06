#include "main.h"

/**
 * free_g - free allocated memory in a 2d matrix
 * @grid: the 2D matrix
 * @height: the number of sub arrays in the 2D arrays
 *
 * Return: Void
 */
void free_g(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

/**
 * alloc_grid - allocate memory to a 2d matrix
 * @width: the width of the matrix
 * @height: the number of sub-arrays within the matrix
 *
 * Return: pointer to location of our 2d matrix
 */
int **alloc_grid(int width, int height)
{
	int i, j, **p;

	/* improbable width or height */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	} /* to make it work better, use int pointer in allocation */

	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			free_g(p, i);
			return (NULL);
		}
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
