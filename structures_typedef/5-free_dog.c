#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 * @d: dog to free
 */

void free_dog(dog_t *d)
{
	if (d != NULL && d->name != NULL)
		free(d->name);
	if (d != NULL && d->owner != NULL)
		free(d->owner);
	if (d != NULL)
		free(d);
}
