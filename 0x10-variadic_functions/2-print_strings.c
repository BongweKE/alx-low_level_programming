#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print all the arguments if they are strings
 * @separator: used to separate the printed arguments
 * @n: the number of arguments
 *
 * Return: sum of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;

	/* check if there are no varidic args */
	if (n == 0)
	{
		return;
	}

	va_start(x, n);
	i = 0;
	while (i < n)
	{
		printf("%s",  va_arg(x, char *));
		if (i < n - 1)
		{
			printf("%s ", separator);
		}
		else
		{
			printf("\n");
		}
		i++;
	}
}
