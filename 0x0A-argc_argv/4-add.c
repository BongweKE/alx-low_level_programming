#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _isdigit - find out if a char is a digit 0 - 9
 * @c: the char we wanna check
 * Return: 1 if it is, 0 if not
 */
int _isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}

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
 * main - Very cool function to add numbers
 * @argc: Number of arguments passed
 * @argv: Commandline arguments
 *
 * Return: Success
 */
int main(int argc, char **argv)
{
	int a, s, l, i, is_a_digit;

	s = 0;
	l = 1;
	while (l < argc)
	{
		i = 0;
		while (i < _strlen(argv[l]))
		{
			/* check if is a digit */
			is_a_digit = _isdigit(argv[l][i]);
			if (is_a_digit == 0)
			{
				printf("Error\n");
				return(1);
			}
			i++;
		}
		a = atoi(argv[l]);
		s = s + a;
		l++;
	}
	printf("%d\n", s);
	exit(EXIT_SUCCESS);
}
