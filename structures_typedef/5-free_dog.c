#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - initializes a structure of type dog
 * @name: pointer to structure
 * @age: pointer to structure
 * @owner: pointer to structure
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
