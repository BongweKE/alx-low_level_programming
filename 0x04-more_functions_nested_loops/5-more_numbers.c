#include "main.h"

/**
 *  print_range - print numbers 0 to a given digit
 * @r: the last number in the range
 */
void print_range(int r)
{
	int n = 0;

	while (n <= r)
	{
		/**
		 * if it has 2 digits
		 * then we get the first one
		 * and print it
		 */
		if (n / 10)
		{
			_putchar((n / 10) + '0');
		}
		_putchar((n % 10) + '0');
		n++;
	}
}

/**
 * more_numbers - print 0 - 14 10 times
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		print_range(14);
		i++;
		_putchar('\n');
	}
}
