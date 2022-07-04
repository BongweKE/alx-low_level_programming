#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point
 * Desctiption: print all numbers 0-9 without using char var
 *
 * Return: 0
 */
int main(void)
{
	short int c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
