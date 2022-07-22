#include <stdio.h>
#include <stdlib.h>

/**
 * main - Very cool function to print name of program
 * @argc: Number of arguments passed
 * @argv: Commandline arguments
 *
 * Return: Success
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
