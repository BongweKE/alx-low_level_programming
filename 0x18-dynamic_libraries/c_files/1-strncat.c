#include "main.h"

/**
 * _strncat - concatenate a given number of chars from a given string to the
 * first string and make sure it ends with a terminator
 * @dest: the first string
 * @src: the given string to concatenate from
 * @n: a given numbers of chars to copy from src
 *
 * Return: concatenated string at address od dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l_dest, i;

	l_dest = _strlen(dest);
	i = 0;
	while (i < n)
	{
		if (src[i] == '\0')/* check for need of null terminator */
		{
			dest[l_dest] = '\0';
			break;
		}
		else/* it has no need for null terminator */
		{
			dest[l_dest] = src[i];
		}
		i++;
		l_dest++;
	}
	return (dest);
}
