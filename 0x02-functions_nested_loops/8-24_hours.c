#include "main.h"

/**
 * print_min: print HH:00 to HH:59
 * @h: values for HH in numbers
 *
 * Return: void
 */
void print_min(char h[])
{
	char m[2];

	m[0] = '0';
	while (m[0] <= '5')
	{
		m[1] = '0';
		while(m[1] <= '9')
		{
			_putchar(h[0]);
			_putchar(h[1]);
			_putchar(':');
			_putchar(m[0]);
			_putchar(m[1]);
			_putchar('\n');
			m[1] = m[1] + 1;
		}
		m[0] = m[0] + 1;
	}
}

/**
 * jack_bauer: print HH:MM for a whole day
 *
 * Return: 0 Always
 */
void jack_bauer(void)
{
	char h[2];

	h[0] = '0';
	while (h[0] <= '2')
	{
		h[1] = '0';
		while(h[1] <= '3')
		{
			/* for each hour, use this fxn */
			print_min(h);
			h[1] = h[1] + 1;
		}
		h[0] = h[0] + 1;
	}
}
