#include <stdio.h>
void i_print(short int k[2])
{
	short int i[2];

	i[0] = k[0];
	i[1] = k[1] + 1; /* **REF** ensure that we always skip current number */
	while (i[0] <= '9')
	{
		while(i[1] <= '9')
		{
			putchar(k[0]);
			putchar(k[1]);
			putchar(' ');
			putchar(i[0]);
			putchar(i[1]);
			putchar(',');
			putchar(' ');
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
 * Return 0 Always
 */
int main()
{
	short int k[2];

	k[0] = '0';
	while (k[0] <= '9')
	{
		k[1] = '0';
		while(k[1] <= '9')
		{
			i_print(k);
			k[1] = k[1] + 1;
		}
		k[0] = k[0] + 1;
	}
	putchar('\n');
	return (0);
}
