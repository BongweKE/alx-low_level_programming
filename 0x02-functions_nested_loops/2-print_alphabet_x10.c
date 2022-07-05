#include "main.h"

/**
 * print_alphabet_x10 - print a-z 10times
 *
 * return: null
 */
void print_alphabet_x10(void)
{
	char i;

	i = 0;
	while(i < 10)
	{
		print_alphabet();
		i = i + 1;
	}
}
