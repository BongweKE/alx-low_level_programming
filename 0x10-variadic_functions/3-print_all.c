#include "variadic_functions.h"
/* check for nulls in strings */
#define NULL_S(S) ((S) == NULL ? ("(nil)") : (S))
/**
 * print_all - prints anything
 * @format: list of the types of arguments passed
 * if string is null, prints nill
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	size_t i = 0;
	int j;
	char *s, *t;

	const char specifiers[] = "cifs";
/*	const char *type[] = {"char","int","float","string"};
 */
	va_list args;

	va_start(args, format);
	while (i  < strlen(format))
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == specifiers[j])
			{
				if (format[i] == 'c')
				{
					printf("%c\n",
					       (unsigned char) va_arg(args, int));
				}
				else if (format[i] == 's')
				{
					s = va_arg(args, char *);
					/* NULL_S does every thing */
					t = NULL_S(s);
					printf("%s\n", t);
				}
				else if (format[i] == 'i')
				{
					printf("%d\n", va_arg(args, int));
				}else if (format[i] == 'f')
				{
					printf("%f\n", va_arg(args, double));
				}
				else
				{
					printf("Print %s\n", "Not available");
				}
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
