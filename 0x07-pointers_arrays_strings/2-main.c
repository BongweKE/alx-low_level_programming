#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "0hello World";
	char *f;

	f = _strchr(s, 'e');
	if (f != NULL)
	{
		printf("%s\n", f);
	}
	else
	{
		printf("%s", f);
		printf("\n");
	}
	return (0);
}
