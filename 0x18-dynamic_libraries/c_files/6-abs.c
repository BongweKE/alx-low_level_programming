#include "main.h"

/**
 * _abs - get absolute value
 * @a: the number we wanna get the absolute value of
 *
 * Return: Absolute value of a
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = a * (-1);
	}
	return (a);
}
