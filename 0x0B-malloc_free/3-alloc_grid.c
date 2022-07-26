#include "main.h"

/**
 *
 */
int **alloc_grid(int width, int height)
{
	int i, j, **p, *a;

	if (width == 0 || height == 0)
	{
		printf("Hakuna kitu ka hio\n");
		return (NULL);
	}
	a = malloc(width * sizeof(int));
	/* somehow that + 1 sizeof(int) is needed idk y*/
	p = malloc((height * sizeof(a)) + sizeof(int));

	if (p == NULL || a == NULL)
	{
		free(a);
		free(p);
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
