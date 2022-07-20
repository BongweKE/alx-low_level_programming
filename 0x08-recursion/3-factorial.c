#include "main.h"

/**
 * factorial - return the factorial of a number
 * and if the value is negative return -1 for error
 * @n: the number we wanna find a factorial of
 *
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
