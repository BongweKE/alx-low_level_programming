#include "main.h"

/**
 *
 */
int **alloc_grid(int width, int height)
{
	int i, j, **p, *a;


	a = malloc(width * sizeof(int));
	p = malloc(height * sizeof(a));

	if (p == NULL || a == NULL)
	{
		printf("Cannot can\n");
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
