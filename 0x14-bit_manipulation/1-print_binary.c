#include "main.h"
#include <stdio.h>

/**
 * print_binary - print out a binary given the base 10 value
 * without using arrays, malloc, % or /
 * @n: base 10 value
 *
 * Return: void
 * Description: Use the Descending Powers of Two and Subtraction
 * method.
 */
void print_binary(unsigned long int n)
{
	unsigned long int limit = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (limit < n)
	{
		/* ensure limit is a multiple of two larger */
		/* than or equal to our decimal */
		limit *= 2;
	}
	printf("limit: %lu, n: %lu\n", limit, n);

	if (limit > n)
	{
		limit /= 2;
	}

	while (limit > 0)
	{
		/* reduce the size of limit during each iteration */
		/* while confirming whether to write 0 or 1 */
		if (limit > n)
		{
			_putchar('0');
			limit /= 2;
		}
		else
		{
			/* printf("\n-n: %ld", n); */
			/* printf("\t-limit: %ld\n", limit); */
			n -= limit;
			_putchar('1');
			limit /= 2;
		}
	}
}
