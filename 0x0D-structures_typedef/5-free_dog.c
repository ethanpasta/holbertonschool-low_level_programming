<<<<<<< HEAD
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees dogs
 * @d: dog struct
 *
 * Return: none
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
=======

>>>>>>> 3a91f323768c3362888d04755a7fab634503bd40
