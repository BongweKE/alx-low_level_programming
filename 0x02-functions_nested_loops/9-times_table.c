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
		if (v <= 9)
			_putchar(' ');
	}
}

/**
 * _putlong - used to print out double digit numbers
 * @v: the double digit number
 */
void _putlong(int v)
{
	/* last and first digit*/
	int l, f;

	l = v % 10;
	f = v / 10;
	_putchar('0' + f);
	_putchar('0' + l);
}

/**
 * times_table - main fxn, used to print a 9x9 times table
 * Return: nothing
 */
void times_table(void)
{
	/**
	 * an array a[] created using iterating i
	 * has rows r and columns c with the current char being v
	 */
	int a[10], i, r, c, v;

	/* create array with 0-9 */
	i = 0;
	while (i <= 9)
	{
		a[i] = i;
		i++;
	}
	/* print out multiples of the array in rows */
	r = 0;
	while (r <= 9)
	{
		c = 0;
		while (c <= 9)
		{
			v = r * a[c];
			if (v > 9) /** check if it's doube digits **/
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
