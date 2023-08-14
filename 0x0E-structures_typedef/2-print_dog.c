#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function prints paramters of the dog struct
 * @d: address to the new struc
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
		printf("Age: %.1f\n", d->age);

	}
}
