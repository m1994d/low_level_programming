#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner name
 * Return: New dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *stored_name;
	char *stored_owner;
	int name_len;
	int owner_len;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	for (name_len = 0; name[name_len] != '\0'; name_len++)
		continue;
	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
		continue;
	stored_name = malloc(sizeof(*name) * (name_len + 1));
	if (stored_name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	stored_owner = malloc(sizeof(*owner) * (owner_len + 1));
	if (stored_owner == NULL)
	{
		free(ndog);
		free(stored_name);
		return (NULL);
	}
	for (name_len = 0; name[name_len] != '\0'; name_len++)
		stored_name[name_len] = name[name_len];
	stored_name[name_len] = '\0';
	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
		stored_owner[owner_len] = owner[owner_len];
	stored_owner[owner_len] = '\0';
	ndog->name =  stored_name;
	ndog->age = age;
	ndog->owner = stored_owner;
	return (ndog);
}
