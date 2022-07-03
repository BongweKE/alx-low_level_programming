#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point
 * Desctiption: print all alphabet xters
 *
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c+1;
	}
	putchar('\n');
	return (0);
}
