#include <stdio.h>
#include <stdlib.h>

/**
 * main - Very cool function to print all bash arguments
 * @argc: Number of arguments passed
 * @argv: Commandline arguments
 *
 * Return: Success
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
