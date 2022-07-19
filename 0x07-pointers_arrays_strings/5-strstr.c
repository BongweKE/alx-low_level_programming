#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be traversed
 * @needle: substring to be found
 *
 * Return: pointer to the beginning of the located substring
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack = h + 1;
	}

	return ('\0');
}
