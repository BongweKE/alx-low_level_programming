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
 * string_toupper - convert lowercase chars of a string to uppercase
 * @str: the string we wanna convert part of
 *
 * Return: the resultant uppercase string
 */
char *string_toupper(char *str)
{
	int i = 0;
	int d = 'a' - 'A';

	while (i < _strlen(str))
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - d;
		}
		i++;
	}
	return (str);
}
