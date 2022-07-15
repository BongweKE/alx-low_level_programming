#include "main.h"

/**
 * leet - convert a string into 1337 language
 * Description: Use the following changes
 * {t, o, l, e, a} == {T, O, L, E, A} == {7, 0, 1, 3, 4}
 * @str: the string
 *
 * Return: the converted string
 */
char *leet(char *str)
{
	int i, j;
	char l[] = {'t', 'o', 'l', 'e', 'a'};
	char u[] = {'T', 'O', 'L', 'E', 'A'};
	char n[] = {'7', '0', '1', '3', '4'};

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (str[i] == l[j] || str[i] == u[j])
			{
				str[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
