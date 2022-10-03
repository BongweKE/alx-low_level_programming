#include "main.h"

/**
 * _islower - check if a char is lowercse
 * @c: the character to check
 *
 * Return: 0 if uppercase, 1 if lowercase
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
