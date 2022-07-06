#include "main.h"

/**
 * print_sign - given a char, return if +ve or -ve
 * @n: The number we input
 *
 * Return: 1 if +ve and 0 if -ve
 */
int print_sign(int n)
{
	int s;

	if (n > 0)
	{
		s = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		s = -1;
		_putchar(45);
	}
	else
	{
		s = 0;
		_putchar('0');
	}
	return (s);
}
