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

	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return (NULL);
	}

	d->owner = malloc(sizeof(owner));
	if (d->owner == NULL)
	{
		return (NULL);
	}
	d->owner = owner;

	d->age = age;

	d->name = malloc(sizeof(name));
	if (d->name == NULL)
	{
		return (NULL);
	}
	d->name = name;

	return (d);
}
