#include "main.h"

/**
 * _strspn - return a count of sequential array members from the first one
 * that match the pattern given regardless of order or repetition
 * @s: the array to check
 * @accept: given pattern
 *
 * Return: the number of matched members (buffers)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, found;
	unsigned int r = 0;/* return 0 by default unless changed */

	i = 0;
	while (s[i] != '\0')
	{
		found = 0;
		j = 0;
		while (accept[j] != '\0' && found == 0)
		{
			if (accept[j] == s[i])
			{
				/* we have found a match create a way to exit */
				found = 1;
				r = i + 1;
			}
			/* otherwise keep searching until we exit at end */
			j++;
		}
		if (found == 0)/* match not found */
		{
			/* time to return the number we want */
			return (r);
		}
		/**
		 * being here means that we found something and we wanna
		 * continue until we cannot find a match so we can return
		 * the number of bytes that match the accept array members
		 */
		i++;
	}
	/* formality */
	return (r);
}
