#include "main.h"

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
void _putlong(int v)
{
	int l, f;

	l = v % 10;
	f = v / 10;
	_putchar('0' + f);
	_putchar('0' + l);
}

/**
 *
 */
void times_table(void)
{
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
	while(r <= 9)
	{
		c = 0;
		while (c <= 9)
		{
			v = r * a[c];
			if(v > 9) /** check if it's doube digits **/
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
