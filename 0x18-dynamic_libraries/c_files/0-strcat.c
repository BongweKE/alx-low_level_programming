#include "main.h"

/**
 * _strcat - concatenate two strings and append the value to the first one
 * @dest: first string where we will append the second one
 * @src: second one
 *
 * Return: address of dest as the concatenation of the two
 */
char *_strcat(char *dest, char *src)
{
	int l_src = _strlen(src);/* length of src array */
	int p = _strlen(dest);/* position we want to change */
	int i;

	i = 0;
	while (i < l_src)
	{
		dest[p] = src[i];
		i++;
		p++;
	}
	return (dest);
}
