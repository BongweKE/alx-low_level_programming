#include <stdio.h>
#include <stdlib.h>
/* for NAN */
#include <math.h>
#include "dog.h"

/**
 * print_dog - print details of a conceptualized dog
 * @d: pointer to the location of dog struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(EXIT_FAILURE);
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: ");
	if (d->age == NAN)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%6f\n", d->age);
	}

	printf("Owner: ");
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->owner);
	}
}
