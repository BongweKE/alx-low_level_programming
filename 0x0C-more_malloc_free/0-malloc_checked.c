#include "main.h"

/**
 *
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
	{
		exit(98);
	}
	return(malloc(b));
}
