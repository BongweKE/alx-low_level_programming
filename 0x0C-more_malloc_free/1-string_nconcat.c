#include "main.h"

/**
 * _strlen - count the length of a string
 * @s: the string that we want to know the length of
 *
 * Return: The length of the string
 */
unsigned int _strlen(char *s)
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
 * _strndup - creates a copy of a given str for length n
 * @str: given string
 * @n: the length of the string to duplicate
 *
 * Return: pointer to the copy or NULL if str == NULL
 */
char *_strndup(char *str, unsigned int n)
{
	unsigned int i, s;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	s = (sizeof(char) * n) + 1; /* size of malloc */
	p = malloc(s);
	if (p == NULL)
	{
		printf("Can't make string of size %d\n", s);
		return (NULL);
	}
	i = 0;
	while (i <= n)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}

/**
 * precheck - deal with concatenations involving null strings
 * @s1: first string
 * @s2: Second string
 * @n: len of s2 to use in concatenation
 *
 * Return: A pointer to the result of concatenation
 */
char *precheck(char *s1, char *s2, unsigned int n)
{
	char *p;

	/* eliminate extremes */
	if (s1 == NULL)
	{
		if (s2 == NULL)
		{
			p = malloc(1 * sizeof(char));
			p[0] = '\0';
			return (p);
		}
		/* s1 null, s2 has something */
		p = _strndup(s2, n);
		return (p);
	}
	if (s2 == NULL)
	{
		/* only s1 has something */
		p = _strndup(s1, _strlen(s1));
	}
	return (p);
}

/**
 * string_nconcat - concatenate two strings using malloc with
 * a limit set for the second string
 * @s1: first one
 * @s2: second one
 * @n: limit
 *
 * Return: Pointer to location of concatenated string or Null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1, size2, s, i, l2;

	/* finish up early if there are null strings */
	if (s1 == NULL || s2 == NULL)
		return (precheck(s1, s2, n));
	/* from here on everything has a value */

	l2 = n;/* reduce size of s2 only if it's more than n */
	if (_strlen(s2) <= n)
	{
		l2 = _strlen(s2);
	}
	size1 = (sizeof(char) * _strlen(s1));
	size2 = (sizeof(char) * l2);
	s = size1 + size2 + 1;  /* size of malloc */
	p = malloc(s);
	if (p == NULL)/* malloc segf check */
	{
		printf("Can't make string size %d\n", s);
		return (NULL);
	} /* now concatenate but use l2 */

	i = 0;
	while (i <= (_strlen(s1) + l2))
	{
		if (i >= _strlen(s1))
		{/* when done with s1 */
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
