#ifndef calc_h
#define calc_h

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif /* calc_h */
