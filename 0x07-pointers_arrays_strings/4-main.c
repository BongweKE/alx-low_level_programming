#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "mto";
	char *t;

	t = _strpbrk(s, f);
	printf("%s", t);
	printf("\n");
	return (0);
}
