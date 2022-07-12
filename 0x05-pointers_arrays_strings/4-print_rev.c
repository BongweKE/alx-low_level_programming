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
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string we wanna put
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (i >= 0 )
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
