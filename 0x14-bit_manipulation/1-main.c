#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_binary(4);
	printf("\n");
	print_binary(5);
	printf("\n");
	print_binary(98);
	printf("\n");
	print_binary(ULONG_MAX - 50);
	printf("\n");
	print_binary((1 << 10) + 1);
	printf("\n");
	return (0);
}
