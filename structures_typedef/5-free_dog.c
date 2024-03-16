#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - initializes a structure of type dog
 * @d: pointer to structure
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
