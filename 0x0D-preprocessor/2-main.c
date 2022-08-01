#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the file it was compiled from
 *
 * Return: SUCCESS
 */
int main(void)
{
	printf("%s\n", __FILE__);
	exit(EXIT_SUCCESS);
}
