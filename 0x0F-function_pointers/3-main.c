#include <stdio.h>
#include "3-calc.h"

/**
 * main - perform simple operations
 * @ac: count of arguments
 * @av: arguments array
 *
 * Return: success or failure
 */
int main(int ac, char **av)
{
	int a, b;
	int (*action)(int a, int b);

	/* check for the number of arguments */
	if (ac != 4)
	{
		exit(EXIT_FAILURE);
	}

	/* convert to integers */
	a = atoi(av[1]);
	b = atoi(av[3]);

	/* null check for the pointer to func result */
	if (get_op_func(av[2]) == NULL)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	/* everything seems okay, go ahead */
	action = get_op_func(av[2]);

	printf("%d\n", action(a, b));
	return (0);
}
