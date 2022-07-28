#include "main.h"

/**
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;

	c = malloc(nmemb * size);
	return(c);
}
