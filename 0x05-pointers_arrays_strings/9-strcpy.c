#include "main.h"

/**
 * _strcpy - copy a given string to a buffer
 * @src: given string
 * @dest: buffer
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
