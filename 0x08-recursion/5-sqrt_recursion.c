#include "main.h"

/**
 * recursor - help to find the square root of a number usisng recursion
 * @n: the number which we wanna find it's square root
 * @r: a potential root to test out
 *
 * Return: the root or -1 for those which do not have a natural root
 */
int recursor(int n, int r)
{
	if (n == (r * r))
	{
		return (r);
	}
	else if (n > (r * r))
	{
		return (recursor(n, (r + 1)));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - call a helper function for numbers which we do not
 * know the root of and which are positive
 * @n: the number which we wanna find the root of
 *
 * Return: the root or -1 for errors
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (recursor(n, 1));
	}
}
