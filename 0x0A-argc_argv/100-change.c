#include <stdio.h>
#include <stdlib.h>
/**
 * recursive_change - calculate change to give, recursively
 * @cents: the amount of money to calculate number of coins to
 * give in change
 * @options: the options we have for coin giving
 *
 * Return: the number of coins to give
 */
int recursive_change(int cents, int *options)
{
	int coins = 0;

	if (cents == 0)
	{
		return (0);
	}
	if (options[0] == 1)
	{
		return (1);
	}

	if (cents >= options[0])
	{
		coins = cents / options[0];
		cents = cents % options[0];
	}
	else
	{
		return (coins + recursive_change(cents, &options[1]));
	}
	return (coins + recursive_change(cents, &options[1]));
}

/**
 * main - Very cool function to calculate change
 * @argc: Number of arguments passed
 * @argv: Commandline arguments
 *
 * Return: Success or failure
 */
int main(int argc, char **argv)
{
	int o[5] = {25, 10, 5, 2, 1}, c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	/* if everything's right */
	c = atoi(argv[1]);
	printf("%d\n", recursive_change(c, o));
	exit(EXIT_SUCCESS);
}
