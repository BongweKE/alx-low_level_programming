#include "main.h"

/**
 * print_diagonal - print diagonal line using the \ symbol
 * @n: the number of \ to use
 */
void print_diagonal(int n)
{
	int i, s;

	i = 1;
	/** ensure n = 0,1 will print empty line 
	 * for the rest ensure the spaces before \ are regulated 
	 */
	while (i <= n)
	{
		if (n > 1)
		{
			s = 0;
			while (s < i)
			{
				_putchar(' ');
				s++;
			}
		}
		_putchar('0' + i);
		_putchar('\n');
		i++;
	}
	if (n < 1)
		_putchar('\n');
}
