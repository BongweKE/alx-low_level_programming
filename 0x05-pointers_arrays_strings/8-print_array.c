#include "main.h"

/**
 * print_array - print a given number of array members
 * @a: the array
 * @n: number of elements of the array to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			/* styling */
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
