#include "main.h"


/**
 * recursor - help to find the square root of a number usisng recursion
 * @n: the number which we wanna find it's square root
 * @r: a potential root to test out (start with 1)
 *
 * Return: the approximate root or -1
 */
int sqrt_aprox_recursor(int n, int r)
{
	/* here's where aprox comes in */
	if ((n <= (r * r)) && (n >= ((r - 1) * (r - 1))))
	{
		return (r);
	}
	else if (n > (r * r))
	{
		return (sqrt_aprox_recursor(n, (r + 1)));
	}
	else
	{
		return (-1);
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
int get_primeness(int n, int t, int max)
{
	/**
	 * remove 1, 0, even numbers, multiples & numbers greater
	 * than root of n */
	if ((n % t == 0) || (n <= 1) || (t > max))
	{
		return (0);
	}
	/* move to the next if we have not found a multiple or reached limit */
	else if ((n % t != 0) && (t <= max))
	{
		return (get_primeness(n, t + 2, max));
	}
	/* is prime if we have reached limit without finding multiple */
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

	/* since get_primeness cant find 2 */
	if (n == 2)
	{
		return (1);
	}

	r = n/2;
	return (get_primeness(n, 2, r));
}
