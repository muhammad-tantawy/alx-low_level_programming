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
		if (d->age == NULL)
		{
			printf("Age: (nil)\n");
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n")
		}
		
		printf("Name:\n" , d->name);
		printf("Age:\n", d->age);
		printf("Owner:\n", d->owner);
	}
}
