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
	int i, j, **p, *a, f;

	/* improbable width or height */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(width * sizeof(int));
	/* somehow that + 2 * sizeof(int) is needed idk y*/
	p = malloc((height * sizeof(a)) + (sizeof(int) * 2) );
	free(a);

	/*use f to track need for freed */
	f = 0;
	if (p == NULL)
	{
		f = 1;
		free(p);
		printf("Cannot can\n");
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			f = 1;
			break;
		}
		j = 0;
		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
		i++;
	}

	/*check for need to free */
	if (f)
	{
		free(p);
		return (NULL);
	}

	return (p);
}
