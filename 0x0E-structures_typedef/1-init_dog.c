#include "dog.h"

/**
 * init_dog - used to initialize the dog struct
 * @name: name of the dog struct
 * @age: member age of the struct
 * @owner: owner member of the struct
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
