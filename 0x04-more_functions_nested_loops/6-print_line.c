#include "main.h"

/**
 * print_line - use _ to print lines on terminal
 * @n: the number of _ to use
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
