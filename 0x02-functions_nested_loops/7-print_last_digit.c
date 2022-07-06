#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the number we wanna print the last digit of
 *
 * Return: l, the last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		l = ((n % 10) * (-1));
	}
	else
	{
		l = n % 10;
	}
	_putchar(l + '0');
	return (l);
}
