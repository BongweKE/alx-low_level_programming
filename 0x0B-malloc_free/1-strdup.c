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
 * _strdup - creates a copy of a given str in memory
 * @str: given string
 *
 * Return: pointer to the copy or NULL if str == NULL
 */
char *_strdup(char *str)
{
	int i, s;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	s = sizeof(char) * _strlen(str);
	p = malloc(s);
	if (p == NULL)
	{
		printf("Can't make string of size %d\n", s);
		return (NULL);
	}
	i = 0;
	while (i <= _strlen(str))
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
