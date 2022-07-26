#include "main.h"

/**
 * free_grid - free allocated memory in a 2d matrix
 * @grid: the 2D matrix
 * @height: the number of sub arrays in the 2D arrays
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
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
