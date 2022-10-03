#include "main.h"

/**
 * _isalpha - check if a char is an alphabet
 * @c: our char which we want to test
 *
 * Return: 1 if alphabet char 0 if not
 */
int _isalpha(int c)
{
	/* Check if it's lower(l) or uppercase(u)*/
	int l = ((c >= 'a') && (c <= 'z'));
	int u = ((c >= 'A') && (c <= 'Z'));
	int v = (l || u);

	return (v);
}
