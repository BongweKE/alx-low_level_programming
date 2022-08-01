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

	#define D_NAME (name);
	#define D_OWNER  (owner);

	d->owner = D_OWNER;
	d->age = age;
	d->name = D_NAME;

	return (d);
}
