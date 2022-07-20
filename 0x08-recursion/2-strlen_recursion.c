#include "main.h"

/**
 * _strlen_recursion - find the lengh of a given string
 * @s: the string we wanna get length of
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
