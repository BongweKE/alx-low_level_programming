#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copies a pointed string
 *
 * @dest: pointer to the destine string
 * @src: pointer to the source string
 *
 * Return: the adress of the destiny string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}

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

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc(sizeof(name));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = _strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(sizeof(owner));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = _strcpy(d->owner, owner);

	return (d);
}
