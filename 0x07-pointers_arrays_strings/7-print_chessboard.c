#include "main.h"

/**
 * print_chessboard - print an 8 x 8 chessboard
 * @a: array[8][8] of current chessboard values
 */
void print_chessboard(char (*a)[8])
{
	int j,i;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
