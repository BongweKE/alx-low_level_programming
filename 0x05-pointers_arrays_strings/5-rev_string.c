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
 * rev_string - reverse a string in memory
 * @s: the address of the string in memory
 */
void rev_string(char *s)
{
	int l = _strlen(s), i, j;
	char c[CHAR_MAX * 100];

	i = 0;
	j = l;
	while (i <= l)
	{
		c[j] = s[i];
		i++;
		j--;
	}
	for (j = 1; j <= l; j++)
	{
		s[j - 1] = c[j];
	}
}
