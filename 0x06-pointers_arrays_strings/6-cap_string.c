#include "main.h"

/**
 * _strlen - count the length of a string
 * @s: the string that we want to know the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (i < INT_MAX)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (i);
}

/**
 * cap - convert a lowercase character to uppercase
 * @x: the lowercase char
 *
 * Return: x in uppercase
 */
char cap(char x)
{
	int d = 'a' - 'A';

	if (x >= 'a' && x <= 'z')
	{
		x = x - d;
	}
	return (x);
}

/**
 * is_sep - check if a char is one of the following:
 * space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @x: the char
 *
 * Return: 1 if is a separator 0 if not
 */
int is_sep(char x)
{
	/**
	 * my separators
	 * they are used to indicate that the next char should be
	 * capitalized
	 * add '\0' for the loop's timely termination without counting
	 */
	char seps[] = {
		' ', '\t', '\n', ',', ';', '.', '!', '?', '(', ')', '{', '}',
		  '\0'};
	int j = 0;

	while (seps[j] != '\0')
	{
		if (x == seps[j])
		{
			return (1);
		}
		j++;
	}
	return (0);
}

/**
 * cap_string - capitalize the first letter of each word for the
 * given string
 * @str: the given string
 *
 * Return: The string capitalized as required
 */
char *cap_string(char *str)
{
	/* Used to change betwen modes of capitalization */
	int captime = 1;
	int i = 0;

	while (i < _strlen(str))
	{
		/**
		 * if the mode is on, we act on it and change
		 * the string to uppercase
		 * by default, the first char will be changed
		 * if need be
		 */

		if (captime)/* testing to see if && is_alphabet required */
		{
			str[i] = cap(str[i]);
			captime = 0;
		}

		/**
		 * check to see if it's time to change the MODE
		 * if changed to one, the next letter should be capitalized
		 * otherwise, if we have a non-separator now, we turn the
		 * mode off for the next character
		 */
		if (is_sep(str[i]))
		{
			captime = 1;
		}
		else
		{
			captime = 0;
		}
		i++;
	}
	return (str);
}
