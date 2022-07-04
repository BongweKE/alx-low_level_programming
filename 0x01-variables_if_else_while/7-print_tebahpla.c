#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point
 * Desctiption: print alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c = c - 1;
	}
	putchar('\n');
	return (0);
}
