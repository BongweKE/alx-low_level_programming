#include "main.h"

/**
 * main - check if _strdup works
 *
 * Return: 0 always
 */
int main(void)
{
	char *s;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
		printf("failed to allocate\n");
		return (EXIT_FAILURE);
	}
	printf("%s\n", s);
	free(s);
	return (EXIT_SUCCESS);
}
