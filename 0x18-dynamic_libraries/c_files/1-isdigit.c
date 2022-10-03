#include "main.h"

/**
 * _isdigit - find out if a char is a digit 0 - 9
 * @c: the char we wanna check
 * Return: 1 if it is, 0 if not
 */
int _isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}
