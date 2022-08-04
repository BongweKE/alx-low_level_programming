#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all the arguments
 * @n: the number of arguments
 *
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	int sum;

	/* check if there are no varidic args */
	if (n == 0)
	{
		return (0);
	}
	va_start(x, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(x, int);
		i++;
	}
	return (sum);
}
