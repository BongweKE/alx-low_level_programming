#include <stdio.h>

/**
 * g_print - print acc to requirements
 * @i: what we want to print out
 * @j: what we want to print out
 * @k: what we want to print out
 * @max_i: what we want to print out
 * @max_j: what we want to print out
 * @max_k: what we want to print out
 * Description : used to ensure we know when
 * print ', ' after the numbers
 *
 * Return: Void (nothing)
 */
void g_print(short int i, short int j, short int k,
	     short int max_i, short int max_j, short int max_k)
{
	putchar(i);
	putchar(j);
	putchar(k);
	if ((i != max_i) || (j != max_j) || (k != max_k))
	{
		putchar(',');
		putchar(' ');
	}
}

/**
 * main - entry point
 * Description: Prints all possible combinations of 3 digits
 * without repetition e.g 012and120, 011,  000
 * How: ensure that i < j < k always
 *
 * Return: 0 always
 */
int main(void)
{
	short int i, j, k, max_i, max_j, max_k;

	i = '0';
	max_k = '9';
	max_j = max_k - 1;
	max_i = max_j - 1;
	while (i <= max_i)
	{
		j = '0';
		while (j <= max_j)
		{
			if (j > i)
			{
				k = '0';
				while (k <= max_k)
				{
					if (k > j)
					{
						g_print(i, j, k, max_i, max_j,
							max_k);
					}
					k = k + 1;
				}
			}
			j = j + 1;
		}
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
