#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function to initialize varibles in struct Dog
 *
 * @d: pointer to address of resultant struct
 * @name: jina
 * @age: in dog years
 * @owner: human dog friend
 *
 * Return: void
 *
 * Description: Parse in an address and the details and get a
 * dog struct as a result
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
