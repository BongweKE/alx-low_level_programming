#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - release memory of a struct created using malloc
 * @d: memory address
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
