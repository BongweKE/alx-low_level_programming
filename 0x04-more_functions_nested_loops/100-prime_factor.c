#include "main.h"

/**
 * is_prime - find out if a number is prime
 * @n: the number we are checking for
 *
 * Return: 1 if n is prime 0 if not
 */
int is_prime(int n)
{
	int i;

	if (n == 2 || n == 3)
	{
		/* is prime */
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		/* is not prime */
		return (0);
	}
	/* do 6k+1 test on numbers less than root */
	for (i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			/* is not prime */
			return (0);
		}
	}
	/* all others are prime */
	return (1);
}

/**
 * main - get largest prime factor of a number
 *
 *
 * HAS FLOATING POINT EXCEPTION ERROR!!!
 *
 *
 * Return: 0 always
 */
int main(void)
{
	/**
	 * f: index holder for factors[100]
	 * factors[] array of factors
	 * n is our number which we are getting factors of
	 * i iterator
	 * prime_factors[] array of prime factors
	 */
	int f, i;
	long int n, factors[100],  prime_factors[200];

	/* first get all factors */
	n = 1225704950286;
	f = 0;
	i = 1;
	while (i <= n / 2)
	{
		if (n % i == 0)
		{
			factors[f] = i;
			/* only increment when we save a factor */
			f++;
		}
		i++;
	}
	/* reset i so we can reuse it to save values to prime_factors[] */
	i = 0;
	/* access factors in reverse so the largest is saved first */
	while (f >= 0)
	{
		if (is_prime(factors[f]))
		{
			prime_factors[i] = factors[f];
			i++;/* only increment when we have to */
		}
		f--;
	}
	/* all prime factors are in the array with the largest first */
	printf("%lu%c", prime_factors[0], '\n');
	return (0);
}
