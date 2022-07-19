#include "main.h"

/**
 * _strchr - return a pointer to the first occurence of a given char
 * in a given string or NULL if not found
 * @s: the given string
 * @c: the given character
 *
 * Return: pointer to c in s or NULL
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;
	int i = 0;

	while (s)/* terminate at the end of the string */
	{
		if (s[i] == c)
		{
			p = &s[i];
			return(p);
		}
		i++;
	}
	return (NULL);
}
