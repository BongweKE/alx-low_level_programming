#include "main.h"
#include <stdio.h>

/**
 * make_buffer - create a buffer to reduce the number of lines
 * required in any functions that needs a large temporary storage
 * location
 *
 * Return: a buffer of 1024 integers initialized to -1
 */
int *make_buffer(void)
{
	int *buf, j;

	buf = malloc(sizeof(int) * 1024);
	if (buf == NULL)
	{
		printf("Malloc Error\n");
		return (NULL);
	}

	j = 0; /* initialize all values to -1 */
	while (j <= 1024)
	{
		buf[j] = -1;
		j++;
	}

	return (buf);
}

/**
 * get_binary - write out a binary given the base 10 value
 * into an array
 * @n: base 10 value
 *
 * Return: array containing binary values
 * Description: Use the Descending Powers of Two and Subtraction
 * method. Use malloc on the empty buffer to avoid
 * error about returning a local variable address
 * then initialize all values in the array to -1 so that it can
 * be used to detect errors in the function calls
 * the above uses int j while we use int i to write out values
 * of binary from our calculation
 * Limit is used to keep track of powers of 2 and an if statement is used
 * for the first test to ensure that we do not use the wrong one e.g:
 * n = 156 begest limit = 256 which has to be reduced to 128 so that
 * the binary calculations can be done right
 * In the main while loop, we reduce the size of the limit in half during each
 * loop while checking to see whether we should write 0 or 1 depending on
 * whether the limit is larger or less than the new n
 */
int *get_binary(unsigned long int n)
{
	unsigned long int limit = 1;
	int *buf, i;

	buf = make_buffer();
	i = 0; /* current buffer location */
	if (n == 0)
	{
		buf[i] = 0;
		i++;
		return (buf);
	}

	while (limit < n)
	{
		limit *= 2;
	}

	if (limit > n)
	{
		limit *= 0.5;
	}

	while (limit > 0)
	{
		if (limit > n)
		{
			buf[i] = 0;
			i++;
			limit *= 0.5;
		}
		else
		{
			buf[i] = 1;
			i++;
			n -= limit;
			limit *= 0.5;
		}
	}
	return (buf);
}


/**
 * get_bit - get the bit at a given index of a binary conversion
 * of a given integer
 * @n: given int
 * @index: given index
 *
 * Return: value of bit or -1 if it doesn't exist
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int *binary = get_binary(n);
	unsigned int i = 0, j = 0;

	while (binary[i] != -1)
	{
		i++;
	}
	/* first we get to the location of expected bit */
	while (j <= index)
	{
		i--;
		j++;
	}

	/* values without interest are set to -1 */
	/* so expect a negative value if the index is out of range */
	if (binary[i] == -1)
		return (-1);

	/* otherwise we expect the right value */
	return (binary[i]);
}
