#include "main.h"

/**
 * print_numbers - print 0-9 avoid 2,4
 */
void print_most_numbers(void)
{
	char  c = '0';

	while (c <= '9')
	{
		if( !(c == '2' || c == '4') )
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
