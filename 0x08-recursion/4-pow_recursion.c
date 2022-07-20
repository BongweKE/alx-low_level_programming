#include "main.h"

/**
 * _pow_recursion - calculate x^y using recursion
 * @x: the number
 * @y: the power
 *
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* error for negative power values */
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
