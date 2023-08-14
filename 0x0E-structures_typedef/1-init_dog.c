#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - used to initialize the dog struct
 * @d: address of the struct
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
