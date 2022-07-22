#include <stdio.h>
#include <stdlib.h>

/**
 * main - Very cool function to add numbers
 * @argc: Number of arguments passed
 * @argv: Commandline arguments
 *
 * Return: Success
 */
int main(int argc, char **argv)
{
	int a, s;

	s = 0;
	while (argc--)
	{
		a = atoi(*argv++);
		s = s + a;
	}
	printf("%d\n", s);
	exit(EXIT_SUCCESS);
}
