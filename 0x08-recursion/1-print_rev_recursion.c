#include "main.h"

/**
 * _strlen - recursive strlen function
 * @s: the string we wanna get length of
 * Return: the length of the string
 */
int _strlen(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}

/**
 * print_n_times - helper function to print in reverse
 * @s: the last char of the string we wanna print in reverse
 * @n: the number of chars we wanna print
 * here we are fed the location of the last char of the string
 * printing this location and then repeating until we are at the
 * first char of our string is the plan
 */
void print_n_times(char *s, int n)
{
	if (n == 0)
	{
		_putchar(s[0]);
		return;
	}
	_putchar(s[0]);
	--s;
	--n;
	print_n_times(s, n);
}

/**
 * _print_rev_recursion - use recursion to print a string in reverse
 * @s: the string we wanna print out well
 * DESCRIPTION: Given a string as follows:
 * | e | b | o |'\0'|
 * | 0 | 1 | 2 | 3  |
 * it has len of 3 thus using a helper function to print from
 * s[3 - 1] till s[0] will give us the reverse
 */
void _print_rev_recursion(char *s)
{
	int l = _strlen(s);

	if (l < 1)
	{
		_putchar('\n');
		return;
	}
	print_n_times(&s[l - 1], l - 1);
}
