#include "main.h"
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, wordlo _wOrld_ this extra";
	char *f = "world";
	char *t;

	t = strstr(s, f);
	printf("%s", t);
	printf("\n");
	return (0);
}
