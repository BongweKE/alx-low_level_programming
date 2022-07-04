#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - entry point
 * Description: Prints all possible combinations of 0-9 in 2 digits
 * without repetition e.g once 01 cant print 10
 * also no 00 or 11 or 22 ...
 * How: given iterables i and j with i being on the outer while -:
 * As long as we only print when j > i we avoid repetitions.
 *
 * Return: 0 Always
 */
int main(void)
{
	short int i, j;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			if (j > i)
			{
				putchar((char)i);
				putchar((char)j);
				putchar(',');
				putchar(' ');
			}
			j = j + 1;
		}
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
