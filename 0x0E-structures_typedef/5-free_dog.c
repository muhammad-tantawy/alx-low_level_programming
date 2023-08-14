#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function frees memory of teh allocated dogs
 * @ dog_t *d : address of the allocated struct called d
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
