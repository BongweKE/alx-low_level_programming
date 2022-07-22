#include <stdio.h>
#include <stdlib.h>

/**
 * main - Very cool function to multiply two numbers
 * @argc: Number of arguments passed
 * @argv: Commandline arguments
 *
 * Return: Success
 */
int main(int argc, char **argv)
{
	int a, b, m;

	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	m = a * b;
	printf("%d\n", m);
	exit(EXIT_SUCCESS);
}
