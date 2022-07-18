#include "main.h"

/**
 * _memset - fills memory of a given array with a constant byte
 * @s: the given array
 * @b: the constant byte
 * @n: the number of positions of the array to fill
 *
 * Return: address of array s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
