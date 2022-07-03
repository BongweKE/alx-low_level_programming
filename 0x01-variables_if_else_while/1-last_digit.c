#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - entry point
 * Description: generate output depending on the value of
 * the last number of an integer
 *
 * Return: 0 Always
 */
int main(void)
{
	int n, lc;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * lc is n % 10 (math)
	 */
	lc = n % 10;
	if (lc > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lc);
	}
	else if (lc == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lc);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lc);
	}
	return (0);
}
