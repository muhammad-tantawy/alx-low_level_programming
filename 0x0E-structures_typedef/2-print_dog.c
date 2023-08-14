#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function prints paramters of the dog struct
 * @d: address to the new struc
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name:\n" , d->name);
		printf("Age:\n", d->age);
		printf("Owner:\n", d->owner);
	}
}
