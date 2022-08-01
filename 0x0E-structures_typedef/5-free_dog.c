#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - release memory of a struct created using malloc
 * @d: memory address
 */
void free_dog(dog_t *d)
{
	free(d);
}
