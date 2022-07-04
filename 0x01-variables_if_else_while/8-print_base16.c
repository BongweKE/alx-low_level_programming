#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point
 * Desctiption: print base16 numbers in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		c = c + 1;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
