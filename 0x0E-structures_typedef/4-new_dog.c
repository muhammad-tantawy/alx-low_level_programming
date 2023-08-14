#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner)
{
	char *namecp;
	char *ownercp;
	int i = 0, j = 0;
	dog_t *dog;

	while (name[i] != '\0')
	{
		i++;
	}
	while (owner[j] != '\0')
	{
		j++;
	}
	
	if (new_dog == NULL)
	{
		return (NULL);
	}
}
