#include "main.h"

/**
 * print_alphabet - print the whole alphabet
 *
 * return: null
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c = c + 1;
	}
	_putchar('\n');
}
