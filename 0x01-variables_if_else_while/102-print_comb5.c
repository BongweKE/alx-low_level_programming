#include <stdio.h>

/**
 * i_print - output the characters in the given criteria
 * @k: an array of two chars masked as short int to start the
 * count. k represent a number e.g 23 is k0=2 and k1=3
 *
 * Description: Given k = 23 create i0=2 and i1=4 from which to
 * print all numbers from 24 to 99 adjacent to 23
 * e.g 23 24, 23 25, ..., 23 98, 23 99
 *
 */
void i_print(short int k[2])
{
	short int i[2];

	i[0] = k[0];
	i[1] = k[1] + 1; /* **REF** ensure that we always skip current number */
	while (i[0] <= '9')
	{
		while (i[1] <= '9')
		{
			putchar(k[0]);
			putchar(k[1]);
			putchar(' ');
			putchar(i[0]);
			putchar(i[1]);
			if (!(
				    (k[0] == '9' && k[1] == '8') &&
				    (i[0] == '9' && i[1] == '9')
				    ))
			{
				putchar(',');
				putchar(' ');
			}
			i[1] = i[1] + 1;
		}
		i[0] = i[0] + 1;
		i[1] = '0'; /* **REF** ensure that the next multiple
			     * of 10 starts correctly
			     * e.g 18, 19, then at 20 we reset i[1] to 0
			     */
	}
}

/**
 * main - entry point
 * prints all possible combinations of 2 2-digit numbers
 * 00 - 99
 *
 * Return: 0 Always
 */
int main(void)
{
	short int k[2];

	k[0] = '0';
	while (k[0] <= '9')
	{
		k[1] = '0';
		while (k[1] <= '9')
		{
			i_print(k);
			k[1] = k[1] + 1;
		}
		k[0] = k[0] + 1;
	}
	putchar('\n');
	return (0);
}
