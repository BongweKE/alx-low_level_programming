#include "3-calc.h"

#include <string.h>
#include <stdio.h>
/**
 * get_op_func - select the correct function to perform the operation
 * once given the char (either + - * / %)
 * @s: the sign of operation
 *
 * Return: pointer to actionable function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	/* don't check the null since using it with strcmp is byaad */
	i = 0;
	while (i < 5)
	{
		/* check if our strings match then continue */
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	/**
	 * anything that reaches here has a problem somewhere
	 * it could be NULL of have a wrong operator
	 * check for NULL operator then for the rest,
	 * exit with error code 99
	 */
	if (s != NULL)
	{
		/* not one of the expected operators */
		printf("Error\n");
		exit(99);
	}
	return(NULL);
}
