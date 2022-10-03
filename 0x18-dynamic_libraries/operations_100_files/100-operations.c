#include "calc.h"

/**
 * add - add two integers
 * @a: first one
 * @b: next one
 *
 * Return: sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - get the difference btw
 * @a: first one
 * @b: second one
 *
 * Return: defference of a and b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply two numbers
 * @a: first one
 * @b: next
 *
 * Return: result of multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}


/**
 * mod - find the remainder of dividing two integers
 * @a: numerator
 * @b: denominator
 *
 * Return: a mod b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
