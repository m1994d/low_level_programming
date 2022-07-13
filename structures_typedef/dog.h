#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure to identify a dog
 * @name: Type char, dog's name
 * @age: Type float, dog's age
 * @owner: Type char, dog's owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;

/**
 * Prototypes - Prototypes for functions
 * @d: pointer to dog info
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
