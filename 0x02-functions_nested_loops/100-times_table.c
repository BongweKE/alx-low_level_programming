#include "main.h"

/**
 * style_if - only add comma and space appropriately
 * @c: used to check if we're on the first column
 * @v: used to check if we should add two spaces
 */
void style_if(int c, int v)
{
	if (c > 0)
	{
		_putchar(',');
		_putchar(' ');
		if (v <= 99)
		{
			_putchar(' ');
			if (v <= 9)
				_putchar(' ');
		}
	}
}

/**
 * _putlong - used to print out double digit and triple digits
 * @v: the double or triple digit number
 */
void _putlong(int v)
{
	/* last, middle and first digit*/
	int l, f, m;

	l = v % 10;
	f = v / 100;
	m = (v % 100) / 10;
	if (v > 99)
		_putchar('0' + f);
	_putchar('0' + m);
	_putchar('0' + l);
}

/**
 * draw_table - main fxn, used to print an N x N times table
 * @n: dimensions
 * Return: nothing
 */
void draw_table(int n)
{
	/**
	 * an array a[] created using iterating i
	 * has rows r and columns c with the current char being v
	 */
	int a[16], i, r, c, v;

	/* create array with 0-n */
	i = 0;
	while (i <= n)
	{
		a[i] = i;
		i++;
	}
	/* print out multiples of the array in rows */
	r = 0;
	while (r <= n)
	{
		c = 0;
		while (c <= n)
		{
			v = r * a[c];
			if (v > 9) /** check if it's double/triple digits **/
			{
				/** only addcomma and space corretly **/
				style_if(c, v);
				_putlong(v);
			}
			else
			{
				style_if(c, v);
				_putchar(v + '0');
			}
			c++;
		}
		_putchar('\n');
		r++;
	}
}

/**
 * print_times_table - executa times_table on condition
 * @n: the size of the table we want (N x N)
 */
void print_times_table(int n)
{
	/* only work on range 0- 15 */
	if (!(n > 15) || (n < 0))
		draw_table(n);
}
