#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees dogs
 * @d: dog structure
 *
 * Return: none
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
