#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: the string we wanna put
 */
void _puts(char *str)
{
	int i, len;

	len = _strlen(str);
	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
