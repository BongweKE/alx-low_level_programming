#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first str
 * @s2: second str
 *
 * Return: an integer less than, equal to or greater than 0
 * if s1 is found to be less than, to match, or be greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	return (*s1 - *s2);
}
