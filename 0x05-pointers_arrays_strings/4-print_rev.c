#include "main.c"

/**
 * _strlen - measure len of a string
 * @str: the string we wanna know len
 *
 * Return: Requested len
 */
int _strlen(char *str)
{
	int i = 0;

	while (i < INT_MAX)
	{
		if (str[i] == '0')
		{
			break;
		}
		i++;
	}
	return (i);
}

/**
 * print_rev - prints a string in reverse
 * @s: the string we wanna reverse
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
