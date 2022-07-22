#include <stdio.h>
#include <stdlib.h>

/**
 * main - Very cool function to print Number of args
 * @argc: Number of arguments passed
 * @argv: Commandline arguments
 *
 * Return: Success
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
