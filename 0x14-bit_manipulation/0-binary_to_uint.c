#include "main.h"
#include <stdio.h>

/**
 * power - raise a number to a given power
 * @x: the number
 * @pow: the power
 * Return: the result
 */
unsigned int power(int x, int pow)
{
	unsigned int result = 1;

	while (pow > 0)
	{
		result = x * result;
		pow--;
	}
	return (result);
}

/**
 * _strlen - count the length of a string
 * @s: the string that we want to know the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * binary_to_uint - convert a string containing a binary no
 * to an unsigned int
 * @b: the string containing binary
 *
 * Return: the conversion result or 0 if b is NULL or one of the
 * chars in b are not binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int l, i; /* used to hold string length of b */

	if (b == NULL)
	{
		return (0);
	}

	l = _strlen((char *)b) - 1;
	i = l;
	while (i >= 0)
	{
		if (b[i] == '1')
		{
			n += power(2, l - i);
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		i--;
	}
	return (n);
}
