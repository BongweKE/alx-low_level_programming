#include "main.h"

/**
 * leet - convert a string into 1337 language
 * Description: Use the following changes
 * a || A = 4
 * e || E = 3
 * o || O = 0
 * t || T = 7
 * l || L = 1
 * @str: the string
 *
 * Return: the converted string
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = '7';
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '1';
		}
		i++;
	}
	return (str);
}
