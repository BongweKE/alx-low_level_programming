#include "variadic_functions.h"
/* check for nulls in strings */
#define NULL_S(S) ((S) == NULL ? ("(nil)") : (S))

/* find errors in specifier == format */
/* #define NO_MATCH(X, Y) ((X) == (Y) ? ("Hakuna io") : NULL) */

/**
 * print_args - print given variadic arguments given type specifiers
 * @args: all the ... arguments
 * @format: the string of suspect specifiers
 *
 * Return: nothing
 * Description:
 * description will use variables and functions used
 * First we'll use i to loop through our suspect specifiers in format
 * j will be used to loop through the real specifiers for each of the
 * suspect specifiers to know if they are real.
 * if they are real, we'll use the switch statement to print the ... var
 * correctly.
 * if they are not, we can print an error message, or just skip it,
 * depending on which stage this program is on
 */
void print_args(const char * const format, va_list args)
{
	size_t i = 0;
	int j;
	char *s, *t;
	const char specifiers[] = "cifs";

	while (i  < strlen(format))
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == specifiers[j])
			{
				switch (format[i])
				{
				case 'c':
					printf("%c",
					       (unsigned char) va_arg(args,
								      int));
					break;
				case 's':
					s = va_arg(args, char *);
					t = NULL_S(s);/* refer to definition */
					printf("%s", t);
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				} /* use to print styler */
				(i == (strlen(format) - 1) ?
				 printf("\n") : printf(", "));
			} /* here is where we catch errors */
			/* find a way to detect NULLS here */
			j++;
		}
		i++;
	}
}
/*
 * Here we catch suspect identifiers which != any specifiers
 * removed it since it's not very important for now
 * test it where we have a comment before j++
 * also you might have to uncomment NO_MATCH definition
 * which is at the top of the page
 * t = NO_MATCH(format[i], specifiers[j]);
 * ((t) == (NULL) ? printf(" ") : printf("%s\n", t));
 */


/**
 * print_all - prints anything
 * @format: list of the types of arguments passed
 * if string is null, prints nil
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);
	print_args(format, args);
	va_end(args);
}
