#include "main.h"

/**
 * repeat_print - print a given char a given number of times
 * @n: the number of times we want to print the char
 * @c: the char we wanna print repeatedly
 */
void repeat_print(int n, char c)
{
	int i = 0;

	while (i < n)
	{
		_putchar(c);
		i++;
	}
}

/**
 * print_triangle - print triangle shape using # sign right aligned
 * @size: the dimensions of our square
 */
void print_triangle(int size)
{
	int i, h, s;

	i = size - 1;
	while (i >= 0)
	{
		h = size - i;
		s = i;
		repeat_print(s, ' ');
		repeat_print(h, '#');
		_putchar('\n');
		i--;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
