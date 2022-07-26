#include "main.h"

/**
 * _strdup - creates a copy of a given str in memory
 * @str: given string
 *
 * Return: pointer to the copy or NULL if str == NULL
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *p;
	if (str == NULL)
	{
		printf("Given string is NULL\n");
		return (NULL);
	}
	p = malloc(sizeof(str));
	if (p == NULL)
	{
		printf("Can't make string of size %lu\n", sizeof(str));
		return (NULL);
	}
	i = 0;
	while (i <= sizeof(str))
	{
		p[i] = str[i];
		i++;
	}
	
	return (p);
}
