#include "main.h"

/**
 * _strpbrk - find the first occurence of any from a given array in
 * a given string
 * @s: the given string to find occurence of the bytes
 * @accept: the given array from which accepted bytes are stored
 *
 * Return: location of the first match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *r = s;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				/* we found a match */
				r = &s[i];
				return (r);
			}
			/* not a match, keep searching */
			j++;
		}
		/* not a match, check next char */
		i++;
	}
	r = &s[i];
	/* no match found, return pointer as initialized */
	return (r);
}
