#include "function_pointers.h"

/**
 * print_name - use function pointer to print a name
 * in a variety of methods
 * @name: a string representing the name
 * @f: a function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	/* avoid null functions */
	(*f)(name);
}
