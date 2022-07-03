#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point
 * Desctiption: print all alphabet xters except e & q
 *
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c != 'e') && (c != 'q'))
		{
			putchar(c);
			c = c + 1;
		}
		else
		{
			c = c + 1;
		}
	}
	putchar('\n');
	return (0);
}
