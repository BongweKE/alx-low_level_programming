#include "3-calc.h"

#include <string.h>
#include <stdio.h>
/**
 * get_op_func - select the correct function to perform the operation
 * once given the char (either + - * / %)
 * @s: the sign of operation
 * @a: first num
 * @b: second num
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
	/* anuthing that reaches here has a problem somewhere */
	return (NULL);
}
