#include "main.h"

/**
 * _memcpy - copy a given number of bytes from a source memory area to a
 * given destination memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: given number of bytes
 *
 * Return: address of destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
