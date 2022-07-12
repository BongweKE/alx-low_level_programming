#include "main.h"

/**
 * _strlen - count the length of a string
 * @s: the string that we want to know the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (i < INT_MAX)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (i);
}


/**
 * _strcpy - copy a given string to a buffer
 * @src: given string
 * @dest: buffer
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, len = _strlen(src);

	/* first copy normal chars */
	while (i < len && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	/* fill the rest with terminator */
	while (i < len)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
