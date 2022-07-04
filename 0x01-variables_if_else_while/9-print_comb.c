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
	short int c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('$');
		}
		c = c + 1;
	}
	return (0);
}
