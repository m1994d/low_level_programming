#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: Struct dog variable
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
