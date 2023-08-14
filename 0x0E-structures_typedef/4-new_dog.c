#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner)
{
	char *namecp = NULL;
	char *ownercp = NULL;
	int i = 0, j = 0, k = 0, l = 0;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	while (name[i] != '\0')
	{
		i++;
	}
	while (owner[j] != '\0')
	{
		j++;
	}
	dog->name = malloc(sizeof(char) * (i + 1));
	if (dog->name == NULL)
	{
		return (NULL);

	}
	dog->owner = malloc(sizeof(char) * (j + 1));
	if (dog->owner == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		ownercp[k] = owner[k];
	}
	ownercp[i] = '\0';
	for (l = 0; l < j; l++)
	{
		namecp[l] = name[l];
	}
	namecp[j] = '\0';
	dog->age = age;
	return (dog);
}
