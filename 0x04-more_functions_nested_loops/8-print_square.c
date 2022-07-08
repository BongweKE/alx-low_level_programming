#include "main.h"

/**
 * print_square - print square shape using # sign
 * @size: the dimensions of our square
 */
void print_square(int size)
{
	int i, j;

	i = size - 1;
	while (i >= 0)
	{
		j = size - 1;
		while (j >= 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		i--;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
