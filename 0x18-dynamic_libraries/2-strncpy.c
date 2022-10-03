#include "main.h"

/**
 * _strncpy - copy a given number of chars string to a buffer
 * @src: given string
 * @dest: buffer
 * @n: number of chars to copy
 *
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
