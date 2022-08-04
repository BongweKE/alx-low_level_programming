#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print all the arguments according to the format
 * @format: used to choose the type
 *
 * Return: sum of arguments
 */
void print_all(const char * const format, ...)
{
	char x = format[0];

	printf("%s", x);

}
