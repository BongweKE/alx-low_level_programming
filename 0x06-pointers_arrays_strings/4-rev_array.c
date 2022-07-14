#include "main.h"

/**
 * reverse_array - change the order of elements in an array
 * @a: the address of the array
 * @n: the length of the array
 */
void reverse_array(int *a, int n)
{
	int temp, i = 0, o = n - 1;

	while (o > i)
	{
		temp = a[i];
		a[i] = a[o];
		a[o] = temp;
		i++;
		o--;
	}
}
