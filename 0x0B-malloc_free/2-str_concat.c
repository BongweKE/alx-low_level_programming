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
	s = (sizeof(char) * _strlen(str)) + 1; /* size of malloc */
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

/**
 * str_concat - concatenate two strings using malloc
 * @s1: first one
 * @s2: second one
 *
 * Return: Pointer to location of concatenated string or Null
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int size1, size2, s, i;

	/* eliminate extremes */
	if (s1 == NULL)
	{
		if (s2 == NULL)
		{
			p = NULL;
			return (p);
		}
		/* s1 null, s2 has something */
		p = _strdup(s2);
		return (p);
	}
	if (s2 == NULL)
	{
		/* only s1 has something */
		p = _strdup(s1);
		return (p);
	}

	/* here everything has a value */
	size1 = (sizeof(char) * _strlen(s1));
	size2 = (sizeof(char) * _strlen(s2));
	s = size1 + size2 + 1;  /* size of malloc */

	p = malloc(s);
	/* malloc segf check */
	if (p == NULL)
	{
		printf("Can't make string size %d\n", s);
		return (NULL);
	}

	/* now concatenate */
	i = 0;
	while (i <= (_strlen(s1) + _strlen(s2)))
	{
		/* when done with s1 */
		if (i >= _strlen(s1))
		{
			/* add vals of s2 */
			p[i] = s2[i - _strlen(s1)];
		}
		/* start with s1 */
		else
		{
			p[i] = s1[i];
		}
		i++;
	}
	/* return pointer to concatenated strings */
	return (p);
}
