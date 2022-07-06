#include "main.h"

/**
 * _isalpha(int c) - check if a char is an alphabet
 * @c: our char which we want to test
 *
 * return: 1 if alphabet else 0
 */
int _isalpha(int c)
{
	/* Check if it's lower(l) or uppercase(u)*/
	int l = ((c >= 'a') && (c <= 'z'));
	int u = ((c >= 'A') && (c <= 'Z'));
	int v = (l || u);

        return (v);
}
