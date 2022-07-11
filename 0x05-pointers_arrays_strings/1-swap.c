#include "main.h"

/**
 * swap_int - used to swap the value of two integers
 * @a: the location of the first integer
 * @b: the location of the second integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
