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
 * _sqrt - call a helper function for numbers which we do not
 * know the root of and which are positive
 * @n: the number which we wanna find the root of
 *
 * Return: the root or -1 for errors
 */
int _sqrt(int n)
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

/**
 * get_primeness - calculate likelihood of number being prime
 * @n: the number we want to know if it's prime
 * @t: int used to increment & test for even numbers and divisor/ multiple
 *
 * Return: 1 if prime, 0 if not
 * PS: Only works for prime numbers from 3 onwards
 * two has to be filtered before calling the function
 */
int get_primeness(int n, int i, int max)
{
	if ((n % i == 0 && i <= max) || n < 0 || n == 1)
	{
		return (0);
	}
	else if (n % i != 0 && i <= max)
	{
		return (get_primeness(n, i + 1, max));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - tell us whether a given number is prime
 * @n: the given number
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int r;/* to calculate max */

	r = _sqrt(n);
	/* cases where the number doesnt have a root, max changes */
	if (r < 0)
	{
		r = n / 2;
	}

	/* since get_primeness cant find 2 */
	if (n == 2)
	{
		return (1);
	}

	return (get_primeness(n, 2, r));
}
