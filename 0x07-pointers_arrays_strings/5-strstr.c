#include "main.h"

int _strcmp(char *s1, char *s2);

int _strlen(char *s);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

/**
 * _strstr - find the first occurrence of a given substring in a given string
 * @haystack: the given string
 * @needle: the given substring
 *
 * Return: Pointer to first char of found substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *p, c, *temp;
	unsigned int l = _strlen(needle);
	/* use c to make haystack smaller */
	c = needle[0];
	p = NULL;
	/* start searching the haystack at the first occurence of c */
	temp = _strchr(haystack, c);

	/**
	 * repeat until the haystack is no longer capable of giving us
	 * a world as long as needle
	 */
	while (temp[l - 1] != '\0')
	{
		/**
		 * check to see if members matched == length of needle
		 * regardless of order
		 */
		if (_strspn(temp, needle) != l)
		{
			/* not what we want, go to next iteration */
			temp = _strchr(&temp[1], c);
		}
		/**
		 * check to see if the matched strings are equal
		 */
		else if (_strcmp(temp, needle) != 0)
		{
			/* not what we want, go to next iteration */
			temp = _strchr(&temp[1], c);
		}
		/**
		 * anything that gets here has matched length and
		 * equal value
		 */
		else
		{
			p = &temp[0];
			break;
		}
	}
	return (p);
}

/* supporting functions */
/* _strspn */
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

/* _strchar */
/**
 * _strchr - return a pointer to the first occurence of a given char
 * in a given string or NULL if not found
 * @s: the given string
 * @c: the given character
 *
 * Return: pointer to c in s or NULL
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;
	int i = 0;

	while (s[i] != '\0')/* terminate at the end of the string */
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		i++;
	}
	return (p);
}

/* _strlen */
/**
 * _strlen - count the length of a string
 * @s: the string that we want to know the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* _strcmp */
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
	/**
	 * given:
	 * address location| *s1 |   |   |   | *s2|  |  |   |
	 * Value of address|   a | b | c | \0|   a| b| p| \0|
	 * compare the location of *s1 and *s2 then move to the next location
	 * until we either find a terminator or find a discrepancy
	 * in this case, it will be when *s1 is on c and *s2 is on p's address
	 */
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2) /* they are totally similar */
	{
		return (0);
	}
	else /* somewhere in the loop we found a disparity */
	{
		return (*s1 - *s2);
	}
}
