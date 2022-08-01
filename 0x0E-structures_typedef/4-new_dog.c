#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - use dog struct to create a conceptualization
 * @name: dog's name
 * @age: in dog years
 * @owner: human's name
 *
 * Return: pointer to dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n, *o;

	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return (NULL);
	}
	n = malloc(sizeof(name));
	o = malloc(sizeof(owner));
	n = name;
	o = owner;

	d->owner = o;
	d->age = age;
	d->name = n;

	return (d);
}
